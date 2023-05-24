%{


#include "tree.h"



int yylex(void);

int yyerror(char* msg);

TreeNode* tree_root;
int nodesNum;

%}

%union
{
  int yint;
  TreeNode* ynode;
};


  //标识符
%token <ynode> Ident

  //关键字
%token <ynode> VOID INT CONST IF ELSE WHILE BREAK CONTINUE RETURN

  //界符 (      )     {       }     [           ]       ;         ,
%token <ynode> LPAREN RPAREN LBRACE RBRACE LSQUBRAKT RSQUBRAKT SEMICOLON COMMA 
 
  //整型数值
%token <ynode> IntConst

  //比较符
%token <ynode> EQ GRAEQ LESEQ NEQ GRA LES

  //运算符
%token <ynode> PLUS MINUS MUL DIV MOD AND OR NOT 

  //赋值
%token <ynode> ASSIGN PLUSASSIGN MINUSASSIGN MULASSIGN DIVASSIGN

 //非终结符
%type <ynode> CompUnit
 //single state
%type <ynode> Number UnaryOp Stmt BlankStmt Cond 
 //Block
%type <ynode> MutiBI Block BlockItem
 //def
%type <ynode> FuncDef ConstDef ArrDimDef VarDef
 //decl
%type <ynode> Decl ConstDecl VarDecl MutiConstDecl MutiVarDecl
 //val
%type <ynode> InitVal ArrInitVal ConstInitVal ConstArrInitVal LVal 
 //Exp
%type <ynode> Exp EqExp AddExp LOrExp MulExp RelExp LAndExp ConstExp UnaryExp PrimaryExp
 //params 
%type <ynode> ArrParam FuncFParam FuncFParams MutiFParams MutiRParams FuncRParams


%left AND OR  
%left PLUS MINUS 
%left MUL DIV MOD
%right NOT
%left LPAREN RPAREN LSQUBRAKT RSQUBRAKT

%nonassoc ELSE IF
%nonassoc RETURN WHILE

%start CompUnit

%%
 /*-------------编译单元-------------*/
CompUnit:  CompUnit Decl   {$$=NewNode(&nodesNum,"CompUnit",0,0);tree_root=$$;AddChild($$,$2);AddChild($$,$1);}
|CompUnit FuncDef  {$$=NewNode(&nodesNum,"CompUnit",0,0);tree_root=$$;AddChild($$,$2);AddChild($$,$1);}
|Decl  {$$=NewNode(&nodesNum,"CompUnit",0,0);tree_root=$$;AddChild($$,$1);}
|FuncDef  {$$=NewNode(&nodesNum,"CompUnit",0,0);tree_root=$$;AddChild($$,$1);}
;

 /*-------------基本符号-------------*/
 //数值
Number: IntConst {$$=NewNode(&nodesNum,"Number",0,0);AddChild($$,$1);}
;

 //单目运算符
UnaryOp: PLUS {$$=NewNode(&nodesNum,"UnaryOp",0,0);AddChild($$,$1);}
|MINUS  {$$=NewNode(&nodesNum,"UnaryOp",0,0);AddChild($$,$1);}
|NOT  {$$=NewNode(&nodesNum,"UnaryOp",0,0);AddChild($$,$1);}
;

 /*-------------声明-------------*/
Decl:   ConstDecl{
$$=NewNode(&nodesNum,"Decl",0,0);
AddChild($$,$1);
}
|VarDecl{
$$=NewNode(&nodesNum,"Decl",0,0);
AddChild($$,$1);
}
;

 /*-------------常量-------------*/
 //常量声明 'const' BType ConstDef { ',' ConstDef } ';'
ConstDecl:  CONST INT ConstDef MutiConstDecl SEMICOLON  {
$$=NewNode(&nodesNum,"Decl",0,0);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
 //{ ',' ConstDef }
MutiConstDecl: MutiConstDecl COMMA ConstDef {
$$=NewNode(&nodesNum,"MutiConstDecl",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/ { $$=NewNode(&nodesNum,"MutiConstDecl",0,0);AddChild($$,NULL);}
;
 //常量定义 Ident { '[' ConstExp ']' } '=' ConstInitVal
ConstDef:   Ident ArrDimDef ASSIGN ConstInitVal{
$$=NewNode(&nodesNum,"ConstDef",0,0);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
 //{ '[' ConstExp ']' }
ArrDimDef: ArrDimDef LSQUBRAKT ConstExp RSQUBRAKT {
$$=NewNode(&nodesNum,"ArrDimDef",0,0);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/{$$=NewNode(&nodesNum,"ArrDimDef",0,0);AddChild($$,NULL);}
;

 //常量初值 ConstExp | '{' [ ConstInitVal { ',' ConstInitVal } ] '}'
ConstInitVal:   ConstExp {
$$=NewNode(&nodesNum,"ConstInitVal",0,0);
AddChild($$,$1);
}
|LBRACE ConstInitVal ConstArrInitVal RBRACE {$$=NewNode(&nodesNum,"ConstInitVal",0,0);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
//{ ',' ConstInitVal }
ConstArrInitVal: ConstArrInitVal COMMA ConstInitVal {$$=NewNode(&nodesNum,"ConstArrInitVal",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/{$$=NewNode(&nodesNum,"ConstArrInitVal",0,0);AddChild($$,NULL);}
;

 /*-------------变量-------------*/
 //变量声明 BType VarDef { ',' VarDef } ';'
VarDecl:   INT VarDef MutiVarDecl SEMICOLON{
$$=NewNode(&nodesNum,"VarDecl",0,0);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;


//{ ',' VarDef }
MutiVarDecl: MutiVarDecl COMMA VarDef { 
$$=NewNode(&nodesNum,"MutiVarDecl",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/{$$=NewNode(&nodesNum,"MutiVarDecl",0,0);AddChild($$,NULL)}
;

 //变量定义 Ident { '[' ConstExp ']' } | Ident { '[' ConstExp ']' } '=' InitVal
VarDef:  Ident ArrDimDef {$$=NewNode(&nodesNum,"VarDef",0,0);
AddChild($$,$2);
AddChild($$,$1);
}
|Ident ArrDimDef ASSIGN InitVal {$$=NewNode(&nodesNum,"VarDef",0,0);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);

}
;

 //变量初值 Exp|'{'[InitVal{','InitVal}]'}'
InitVal:   Exp {  
$$=NewNode(&nodesNum,"VarDef",0,0);
AddChild($$,$1);
}
|LBRACE RBRACE{ 
  $$=NewNode(&nodesNum,"VarDef",0,0);
  AddChild($$,$2);
  AddChild($$,$1);
}
|LBRACE InitVal ArrInitVal RBRACE{  
  $$=NewNode(&nodesNum,"VarDef",0,0);
  AddChild($$,$4);
  AddChild($$,$3);
  AddChild($$,$2);
  AddChild($$,$1);
}
;
//{','InitVal}
ArrInitVal: ArrInitVal COMMA InitVal {  
$$=NewNode(&nodesNum,"ArrInitVal",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/ { $$=NewNode(&nodesNum,"ArrInitVal",0,0);
AddChild($$,NULL);
}
;
 
 /*-------------函数-------------*/

 //FuncType->VOID｜INT
 //函数定义 FuncType Ident '(' [FuncFParams] ')' Block
FuncDef:    INT Ident LPAREN FuncFParams RPAREN Block{ $$=NewNode(&nodesNum,"FuncDef",0,0);
AddChild($$,$6);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|VOID Ident LPAREN FuncFParams RPAREN Block{  $$=NewNode(&nodesNum,"FuncDef",0,0);
AddChild($$,$6);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);

}
|INT Ident LPAREN RPAREN Block{ $$=NewNode(&nodesNum,"FuncDef",0,0);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|VOID Ident LPAREN RPAREN Block{  $$=NewNode(&nodesNum,"FuncDef",0,0);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;

 //函数形参表 FuncFParam { ',' FuncFParam }
FuncFParams:    FuncFParam MutiFParams{ $$=NewNode(&nodesNum,"FuncFParams",0,0);
AddChild($$,$2);
AddChild($$,$1);
}
;

//{ ',' FuncFParam }
MutiFParams: MutiFParams COMMA FuncFParam { $$=NewNode(&nodesNum,"MutiFParams",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/{ $$=NewNode(&nodesNum,"MutiFParams",0,0);
AddChild($$,NULL);
}
;

 //函数形参 BType Ident ['[' ']' { '[' Exp ']' }]
FuncFParam: INT Ident{  $$=NewNode(&nodesNum,"FuncFParam",0,0);
AddChild($$,$2);
AddChild($$,$1);
}
|INT Ident LSQUBRAKT RSQUBRAKT ArrParam{  $$=NewNode(&nodesNum,"FuncFParam",0,0);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;

//{ '[' Exp ']' }
ArrParam: ArrParam LSQUBRAKT Exp RSQUBRAKT {  $$=NewNode(&nodesNum,"ArrParam",0,0);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/{  $$=NewNode(&nodesNum,"ArrParam",0,0);
AddChild($$,NULL);
}
;

 //函数实参表 Exp{','Exp}
FuncRParams:    Exp MutiRParams{ $$=NewNode(&nodesNum,"FuncRParams",0,0);
AddChild($$,$2);
AddChild($$,$1);
}
;
//{','Exp}
MutiRParams: MutiRParams COMMA Exp {  $$=NewNode(&nodesNum,"MutiRParams",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/{  $$=NewNode(&nodesNum,"MutiRParams",0,0);
AddChild($$,NULL);
}
;
 
 /*-------------语句-------------*/
 //语句块 '{' { BlockItem } '}'
Block:  LBRACE MutiBI RBRACE{ $$=NewNode(&nodesNum,"FuncRParams",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
//{ BlockItem }
MutiBI: MutiBI BlockItem {  $$=NewNode(&nodesNum,"MutiBlockItem",0,0);
AddChild($$,$2);
AddChild($$,$1);
}
| /*empty*/{  $$=NewNode(&nodesNum,"MutiBlockItem",0,0);
AddChild($$,NULL);

}
;
 //语句块项
BlockItem:  Decl{ $$=NewNode(&nodesNum,"BlockItem",0,0);
AddChild($$,$1);
}
|Stmt{ $$=NewNode(&nodesNum,"BlockItem",0,0);
AddChild($$,$1);
}
;

 //语句
Stmt:   LVal ASSIGN Exp SEMICOLON           //LVal '=' Exp ';' 
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);

}
|Exp SEMICOLON                              //[Exp] ';' 
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$2);
AddChild($$,$1);
}
|Block                                      // Block
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$1);
}
|IF LPAREN Cond RPAREN Stmt ELSE Stmt       //'if' '( Cond ')' Stmt [ 'else' Stmt ]
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$7);
AddChild($$,$6);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);

}
|IF LPAREN Cond RPAREN Stmt
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);

}
|WHILE LPAREN Cond RPAREN Stmt              //'while' '(' Cond ')' Stmt
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$5);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);

}
|BREAK SEMICOLON                            //'break' ';' 
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$2);
AddChild($$,$1);

}
|CONTINUE SEMICOLON                         //'continue' ';'
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$2);
AddChild($$,$1);
}
|RETURN Exp SEMICOLON                       //'return' [Exp] ';'
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|RETURN SEMICOLON 
{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$2);
AddChild($$,$1);
}
|BlankStmt{ $$=NewNode(&nodesNum,"Stmt",0,0);
AddChild($$,$1);
}
;

BlankStmt: SEMICOLON{
  $$=NewNode(&nodesNum,"BlankStmt",0,0);
  AddChild($$,$1);
}
;


 /*-------------表达式-------------*/

Exp: AddExp{
  $$=NewNode(&nodesNum,"Exp",0,0);
  AddChild($$,$1);
}
;

 //条件表达式
Cond:   LOrExp{
  $$=NewNode(&nodesNum,"Cond",0,0);
  AddChild($$,$1);
}
;
 //左值表达式 Ident {'[' Exp ']'}
LVal:   Ident ArrParam{
  $$=NewNode(&nodesNum,"LVal",0,0);
  AddChild($$,$2);
  AddChild($$,$1);
}
;

 //基本表达式 '(' Exp ')' | LVal | Number
PrimaryExp: LPAREN Exp RPAREN{
$$=NewNode(&nodesNum,"PrimaryExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|LVal{
$$=NewNode(&nodesNum,"PrimaryExp",0,0);
AddChild($$,$1);
}
|Number{
$$=NewNode(&nodesNum,"PrimaryExp",0,0);
AddChild($$,$1);
}
;
 //一元表达式 PrimaryExp | Ident '(' [FuncRParams] ')'| UnaryOp UnaryExp
UnaryExp:   PrimaryExp{
$$=NewNode(&nodesNum,"UnaryExp",0,0);
AddChild($$,$1);
}
|Ident LPAREN FuncRParams RPAREN{
$$=NewNode(&nodesNum,"UnaryExp",0,0);
AddChild($$,$4);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);

}
|Ident LPAREN RPAREN{
$$=NewNode(&nodesNum,"UnaryExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);

}
|UnaryOp UnaryExp{
$$=NewNode(&nodesNum,"UnaryExp",0,0);
AddChild($$,$2);
AddChild($$,$1);

}
;
 //乘除模表达式 UnaryExp | MulExp ('*' | '/' | '%') UnaryExp
MulExp: UnaryExp{
$$=NewNode(&nodesNum,"MulExp",0,0);
AddChild($$,$1);
}
|MulExp MUL UnaryExp{
$$=NewNode(&nodesNum,"MulExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|MulExp DIV UnaryExp{
$$=NewNode(&nodesNum,"MulExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|MulExp MOD UnaryExp{
$$=NewNode(&nodesNum,"MulExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
 //加减表达式 MulExp | AddExp ('+' | '−') MulExp
AddExp: MulExp{
$$=NewNode(&nodesNum,"AddExp",0,0);
AddChild($$,$1);
}
|AddExp PLUS MulExp{
$$=NewNode(&nodesNum,"AddExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|AddExp MINUS MulExp{
$$=NewNode(&nodesNum,"AddExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
 //关系表达式 AddExp | RelExp ('<' | '>' | '<=' | '>=') AddExp
RelExp: AddExp{
$$=NewNode(&nodesNum,"RelExp",0,0);
AddChild($$,$1);
}
|RelExp LES AddExp{
$$=NewNode(&nodesNum,"RelExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|RelExp GRA AddExp{
$$=NewNode(&nodesNum,"RelExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|RelExp LESEQ AddExp{
$$=NewNode(&nodesNum,"RelExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|RelExp GRAEQ AddExp{
$$=NewNode(&nodesNum,"RelExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
 //相等性表达式 RelExp | EqExp ('==' | '!=') RelExp
EqExp:  RelExp{
$$=NewNode(&nodesNum,"EqExp",0,0);
AddChild($$,$1);
}
|EqExp EQ RelExp{
$$=NewNode(&nodesNum,"EqExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
|EqExp NEQ RelExp{
$$=NewNode(&nodesNum,"EqExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
 //逻辑与 EqExp | LAndExp '&&' EqExp
LAndExp:    EqExp{
$$=NewNode(&nodesNum,"LAndExp",0,0);
AddChild($$,$1);
}
|LAndExp AND EqExp{
$$=NewNode(&nodesNum,"LAndExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
 //逻辑或 LAndExp | LOrExp '||' LAndExp
LOrExp: LAndExp{
$$=NewNode(&nodesNum,"LOrExp",0,0);
AddChild($$,$1);
}
|LOrExp OR LAndExp{
$$=NewNode(&nodesNum,"LOrExp",0,0);
AddChild($$,$3);
AddChild($$,$2);
AddChild($$,$1);
}
;
 //常量表达式
ConstExp:   AddExp{
$$=NewNode(&nodesNum,"ConstExp",0,0);
AddChild($$,$1);
}
;



%%

int main(int argc, char** argv){

    FILE* outf;
    FILE* idxf;
    if (argc==2){
      outf=fopen(argv[0],"w");
      idxf=fopen(argv[1],"w");
    }

    tree_root = NULL;
    nodesNum = 1;//从1开始，0代表终结符的值
    
    
    yyparse();
    DrawAST(tree_root, outf, idxf);

    fclose(outf);
    fclose(idxf);
  
    return 0;
}

int yyerror(char* msg){
    printf("error: %s\n",msg);
    return 0;
}