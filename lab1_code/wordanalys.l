/*
 * worldanalys.l
 */

%option noyywrap

%top{
  #include <math.h>
}

%{  //type
  #define MYOPRATER "O"
  #define MYKEY "K"
  #define MYDOMAIN "D"
  #define MYID "I"
  #define MYOTHER "T"
  #define MYCONST "C"
  
  //to get position
  int row=1;
  int col=1;

  //functions when matched
  void WORDFUNC_print(char*ytext, char* word_type, FILE* yout){
     fprintf(yout, "%s: %s, (%d %d)\n", ytext, word_type, row,col);
  }

  void WORDFUNC_space(int ylen){
      col+=ylen;
  }
  void WORDFUNC_lindfeed(){
      row+=1;
      col=1;
  }
  void WORDFUNC_comment(char* ytext, int ylen, FILE* yout){
      WORDFUNC_print(ytext,MYOTHER,yout);
      col+=ylen;
  }

  void WORDFUNC_Operator(char* ytext, int ylen, FILE* yout){
      
      WORDFUNC_print(ytext,MYOPRATER,yout);
      col+=ylen;
      
  }
  void WORDFUNC_Domain(char* ytext, int ylen, FILE* yout){
      WORDFUNC_print(ytext,MYDOMAIN,yout);
      col+=ylen;
  }
  void WORDFUNC_Key(char* ytext, int ylen, FILE* yout){
      WORDFUNC_print(ytext,MYKEY,yout);
      col+=ylen;
  }
  void WORDFUNC_Const(char* ytext, int ylen, FILE* yout){
      WORDFUNC_print(ytext,MYCONST,yout);
      col+=ylen;
  }
  void WORDFUNC_Id(char* ytext, int ylen, FILE* yout){
      WORDFUNC_print(ytext,MYID,yout);
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
LPAREN "("
RPAREN ")"
LSQUBRAKT "["
RSQUBRAKT "]"
LBRACE "{"
RBRACE "}"
SEMICOLON ";"
COMMA ","


  //part3:O
EQ "=="
GRAEQ ">="
LESEQ "<="
NEQ "!="
ASSIGN "="
PLUSASSIGN "+="
MINUSASSIGN "-="
MULASSIGN "*="
DIVASSIGN "/="
GRA ">"
LES "<"
PLUS "+"
MINUS "-"
MUL "*"
DIV "/"
MOD "%"
AND "&&"
OR "||"
NOT "!"

  //part4:K
INT "int"
CONST "const"
VOID "void"
IF "if"
ELSE "else"
WHILE "while"
BREAK "break"
CONTINUE "continue"
RETURN "return"


  //part5:C
OCTNUMBER 0[0-7]+
DECNUMBER -?[0-9]+
HEXNUMBER 0[Xx][0-9a-fA-F]+

  //part6:I
ID [a-zA-Z_][a-zA-Z0-9_]*


%%
  /*recognize rules*/

{SPACE} WORDFUNC_space(yyleng);
{TAB} WORDFUNC_space(4);
{LINEFEED} WORDFUNC_lindfeed();



{LPAREN} WORDFUNC_Domain(yytext,yyleng,yyout);
{RPAREN} WORDFUNC_Domain(yytext,yyleng,yyout);
{LSQUBRAKT} WORDFUNC_Domain(yytext,yyleng,yyout);
{RSQUBRAKT} WORDFUNC_Domain(yytext,yyleng,yyout);
{LBRACE} WORDFUNC_Domain(yytext,yyleng,yyout);
{RBRACE} WORDFUNC_Domain(yytext,yyleng,yyout);
{SEMICOLON} WORDFUNC_Domain(yytext,yyleng,yyout);
{COMMA} WORDFUNC_Domain(yytext,yyleng,yyout);


{EQ} WORDFUNC_Operator(yytext,yyleng,yyout);
{GRAEQ} WORDFUNC_Operator(yytext,yyleng,yyout); 
{LESEQ} WORDFUNC_Operator(yytext,yyleng,yyout);
{NEQ} WORDFUNC_Operator(yytext,yyleng,yyout);
{ASSIGN} WORDFUNC_Operator(yytext,yyleng,yyout);
{PLUSASSIGN} WORDFUNC_Operator(yytext,yyleng,yyout);
{MINUSASSIGN} WORDFUNC_Operator(yytext,yyleng,yyout);
{MULASSIGN} WORDFUNC_Operator(yytext,yyleng,yyout);
{DIVASSIGN} WORDFUNC_Operator(yytext,yyleng,yyout);
{GRA} WORDFUNC_Operator(yytext,yyleng,yyout);
{LES} WORDFUNC_Operator(yytext,yyleng,yyout);
{PLUS} WORDFUNC_Operator(yytext,yyleng,yyout);
{MINUS} WORDFUNC_Operator(yytext,yyleng,yyout);
{MUL} WORDFUNC_Operator(yytext,yyleng,yyout);
{DIV} WORDFUNC_Operator(yytext,yyleng,yyout);
{MOD} WORDFUNC_Operator(yytext,yyleng,yyout);
{AND} WORDFUNC_Operator(yytext,yyleng,yyout);
{OR} WORDFUNC_Operator(yytext,yyleng,yyout);
{NOT} WORDFUNC_Operator(yytext,yyleng,yyout);


{INT} WORDFUNC_Key(yytext,yyleng,yyout);
{CONST} WORDFUNC_Key(yytext,yyleng,yyout);
{VOID} WORDFUNC_Key(yytext,yyleng,yyout);
{IF} WORDFUNC_Key(yytext,yyleng,yyout);
{ELSE} WORDFUNC_Key(yytext,yyleng,yyout);
{WHILE} WORDFUNC_Key(yytext,yyleng,yyout);
{BREAK} WORDFUNC_Key(yytext,yyleng,yyout);
{CONTINUE} WORDFUNC_Key(yytext,yyleng,yyout);
{RETURN} WORDFUNC_Key(yytext,yyleng,yyout);

{OCTNUMBER} WORDFUNC_Const(yytext,yyleng,yyout);
{DECNUMBER} WORDFUNC_Const(yytext,yyleng,yyout);
{HEXNUMBER} WORDFUNC_Const(yytext,yyleng,yyout);

{ID} WORDFUNC_Id(yytext,yyleng,yyout);

{COMMENTLINEBEGIN} BEGIN(commentline);
<commentline>{COMMENTCONTENT} WORDFUNC_comment(yytext,yyleng,yyout);
<commentline>{LINEFEED} {WORDFUNC_lindfeed();BEGIN(INITIAL);}

{COMMENTBEGIN} BEGIN(comment);
<comment>{COMMENTCONTENT}  WORDFUNC_comment(yytext,yyleng,yyout);
<comment>{LINEFEED} WORDFUNC_lindfeed();
<comment>{COMMENTEND} BEGIN(INITIAL);
%%

int main(int argc, char** argv)
{
  //yyin=fopen("./testFILE/2.sy","r");
  yylex();
}