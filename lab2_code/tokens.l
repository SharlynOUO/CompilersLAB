/*
 * worldanalys.l
 */

%option noyywrap

%top{

  /* 
   * tree.h 必须在 syntax.tab.h之前引用
   * (https://stackoverflow.com/questions/33373248/using-union-in-yacc-file)
   */
  #include "tree.h" 

  #include "syntax.tab.h"

  extern int nodesNum;
  
}

%{  //type
  #define L_OP "O"
  #define L_KEY "K"
  #define L_DOMAIN "D"
  #define L_ID "I"
  #define L_OTHER "T"
  #define L_CONST "C"
  
  //to get position
  int row=1;
  int col=1;


  //functions when matched
  void func_print(char*ytext, char* word_type, FILE* yout){
     
    fprintf(yout, "%s: %s, (%d %d)\n", ytext, word_type, row,col);
  }

  void func_space(int ylen){
      col+=ylen;
  }
  void func_lindfeed(){
      row+=1;
      col=1;
  }
  void func_comment(char* ytext, int ylen, FILE* yout){
     // func_print(ytext,L_OTHER,yout);
      col+=ylen;
  }

  void func_Operator(char* symbol, char* ytext, int ylen, FILE* yout){
      func_print(ytext,L_OP,yout);

      TreeNode* nd = NewNode(&nodesNum,symbol, row, col);
      nd->terminal_val = 1;
      WriteStringVal(nd, ytext);
      yylval.ynode = nd;
      
      col+=ylen;
      
  }
  void func_Domain(char* symbol, char* ytext, int ylen, FILE* yout){
      func_print(ytext,L_DOMAIN,yout);

      TreeNode* nd = NewNode(&nodesNum,symbol, row, col);
      nd->terminal_val = 1;
      WriteStringVal(nd, ytext);
      yylval.ynode = nd;
      
      col+=ylen;
  }
  void func_Key(char* symbol, char* ytext, int ylen, FILE* yout){
    
      func_print(ytext,L_KEY,yout);
      
      TreeNode* nd = NewNode(&nodesNum,symbol, row, col);
      nd->terminal_val = 1;
      WriteStringVal(nd, ytext);
      yylval.ynode = nd;

      col+=ylen;
  }
  void func_IntConst( int type, char* ytext,int ylen, FILE* yout){
      func_print(ytext,L_CONST,yout);
      
      TreeNode* nd = NewNode(&nodesNum,"IntConst", row, col);
      int t;
      if (type == 0){
        sscanf(ytext, "%o", &t);
      }
      else if (type==1){
        sscanf(ytext, "%d", &t);
      }
      else if (type==2){
        sscanf(ytext, "%x", &t);
      }
      WriteIntVal(nd, t);
      WriteStringVal(nd, ytext);
      nd->terminal_val = 1;
      yylval.ynode = nd;
      
      col+=ylen;
  }
  void func_Id(char* ytext, int ylen, FILE* yout){
      
      func_print(ytext,L_ID,yout);
      
      TreeNode* nd = NewNode(&nodesNum,"Identifier", row, col);
      nd->terminal_val = 1;
      WriteStringVal(nd, ytext);
      yylval.ynode = nd;

      col+=ylen;
  }
  

%}

  /*正则式辅助定义*/
%x commentline comment

  //part 1:T
  //空格和列计数有关,换行计算行
SPACE (" ")+
TAB ("\t")+
LINEFEED "\n"
COMMENTLINEBEGIN "//"
COMMENTBEGIN "/*"
COMMENTEND "*/"
COMMENTCONTENT .


  //part2:D
L_LPAREN "("
L_RPAREN ")"
L_LSQUBRAKT "["
L_RSQUBRAKT "]"
L_LBRACE "{"
L_RBRACE "}"
L_SEMICOLON ";"
L_COMMA ","


  //part3:O
L_EQ "=="
L_GRAEQ ">="
L_LESEQ "<="
L_NEQ "!="
L_ASSIGN "="
L_PLUSASSIGN "+="
L_MINUSASSIGN "-="
L_MULASSIGN "*="
L_DIVASSIGN "/="
L_GRA ">"
L_LES "<"
L_PLUS "+"
L_MINUS "-"
L_MUL "*"
L_DIV "/"
L_MOD "%"
L_AND "&&"
L_OR "||"
L_NOT "!"

  //part4:K
L_INT "int"
L_CONST "const"
L_VOID "void"
L_IF "if"
L_ELSE "else"
L_WHILE "while"
L_BREAK "break"
L_CONTINUE "continue"
L_RETURN "return"


  //part5:C
L_OCTNUM 0[0-7]*
L_DECIMAL [1-9][0-9]*
L_HEXNUM 0[Xx][0-9a-fA-F]+

  //part6:I
L_ID [a-zA-Z_][a-zA-Z0-9_]*


%%
  /*recognize rules*/

{SPACE} func_space(yyleng);
{TAB} func_space(yyleng);
{LINEFEED} func_lindfeed();



{L_LPAREN} func_Domain("LPAREN",yytext,yyleng,yyout);return LPAREN;
{L_RPAREN} func_Domain("RPAREN",yytext,yyleng,yyout);return RPAREN;
{L_LSQUBRAKT} func_Domain("LSQUBRAKT",yytext,yyleng,yyout);return LSQUBRAKT;
{L_RSQUBRAKT} func_Domain("RSQUBRAKT",yytext,yyleng,yyout);return RSQUBRAKT;
{L_LBRACE} func_Domain("LBRACE",yytext,yyleng,yyout);return LBRACE;
{L_RBRACE} func_Domain("RBRACE",yytext,yyleng,yyout);return RBRACE;
{L_SEMICOLON} func_Domain("SEMICOLON",yytext,yyleng,yyout);return SEMICOLON;
{L_COMMA} func_Domain("COMMA",yytext,yyleng,yyout);return COMMA;


{L_EQ} func_Operator("EQ",yytext,yyleng,yyout);return EQ;
{L_GRAEQ} func_Operator("GRAEQ",yytext,yyleng,yyout);return GRAEQ;
{L_LESEQ} func_Operator("LESEQ",yytext,yyleng,yyout);return LESEQ;
{L_NEQ} func_Operator("NEQ",yytext,yyleng,yyout);return NEQ;
{L_ASSIGN} func_Operator("ASSIGN",yytext,yyleng,yyout);return ASSIGN;
{L_PLUSASSIGN} func_Operator("PLUSASSIGN",yytext,yyleng,yyout);return PLUSASSIGN;
{L_MINUSASSIGN} func_Operator("MINUSASSIGN",yytext,yyleng,yyout);return MINUSASSIGN;
{L_MULASSIGN} func_Operator("MULASSIGN",yytext,yyleng,yyout);return MULASSIGN;
{L_DIVASSIGN} func_Operator("DIVASSIGN",yytext,yyleng,yyout);return DIVASSIGN;
{L_GRA} func_Operator("GRA",yytext,yyleng,yyout);return GRA;
{L_LES} func_Operator("LES",yytext,yyleng,yyout);return LES;
{L_PLUS} func_Operator("PLUS",yytext,yyleng,yyout);return PLUS;
{L_MINUS} func_Operator("MINUS",yytext,yyleng,yyout);return MINUS;
{L_MUL} func_Operator("MUL",yytext,yyleng,yyout);return MUL;
{L_DIV} func_Operator("DIV",yytext,yyleng,yyout);return DIV;
{L_MOD} func_Operator("MOD",yytext,yyleng,yyout);return MOD;
{L_AND} func_Operator("AND",yytext,yyleng,yyout);return AND;
{L_OR} func_Operator("OR",yytext,yyleng,yyout);return OR;
{L_NOT} func_Operator("NOT",yytext,yyleng,yyout);return NOT;


{L_INT} func_Key("INT",yytext,yyleng,yyout);return INT;
{L_CONST} func_Key("CONST",yytext,yyleng,yyout);return CONST;
{L_VOID} func_Key("VOID",yytext,yyleng,yyout);return VOID;
{L_IF} func_Key("IF",yytext,yyleng,yyout);return IF;
{L_ELSE} func_Key("ELSE",yytext,yyleng,yyout);return ELSE;
{L_WHILE} func_Key("WHILE",yytext,yyleng,yyout);return WHILE;
{L_BREAK} func_Key("BREAK",yytext,yyleng,yyout);return BREAK;
{L_CONTINUE} func_Key("CONTINUE",yytext,yyleng,yyout);return CONTINUE;
{L_RETURN} func_Key("RETURN",yytext,yyleng,yyout);return RETURN;

{L_OCTNUM} func_IntConst(0,yytext,yyleng,yyout);return IntConst;
{L_DECIMAL} func_IntConst(1,yytext,yyleng,yyout);return IntConst;
{L_HEXNUM} func_IntConst(2,yytext,yyleng,yyout);return IntConst;

{L_ID} func_Id(yytext,yyleng,yyout);return Ident;

{COMMENTLINEBEGIN} BEGIN(commentline);
<commentline>{COMMENTCONTENT} func_comment(yytext,yyleng,yyout);
<commentline>{LINEFEED} {func_lindfeed();BEGIN(INITIAL);}

{COMMENTBEGIN} BEGIN(comment);
<comment>{COMMENTCONTENT}  func_comment(yytext,yyleng,yyout);
<comment>{LINEFEED} func_lindfeed();
<comment>{COMMENTEND} BEGIN(INITIAL);
%%
