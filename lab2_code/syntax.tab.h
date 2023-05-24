/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Ident = 258,
     VOID = 259,
     INT = 260,
     CONST = 261,
     IF = 262,
     ELSE = 263,
     WHILE = 264,
     BREAK = 265,
     CONTINUE = 266,
     RETURN = 267,
     LPAREN = 268,
     RPAREN = 269,
     LBRACE = 270,
     RBRACE = 271,
     LSQUBRAKT = 272,
     RSQUBRAKT = 273,
     SEMICOLON = 274,
     COMMA = 275,
     IntConst = 276,
     EQ = 277,
     GRAEQ = 278,
     LESEQ = 279,
     NEQ = 280,
     GRA = 281,
     LES = 282,
     PLUS = 283,
     MINUS = 284,
     MUL = 285,
     DIV = 286,
     MOD = 287,
     AND = 288,
     OR = 289,
     NOT = 290,
     ASSIGN = 291,
     PLUSASSIGN = 292,
     MINUSASSIGN = 293,
     MULASSIGN = 294,
     DIVASSIGN = 295
   };
#endif
/* Tokens.  */
#define Ident 258
#define VOID 259
#define INT 260
#define CONST 261
#define IF 262
#define ELSE 263
#define WHILE 264
#define BREAK 265
#define CONTINUE 266
#define RETURN 267
#define LPAREN 268
#define RPAREN 269
#define LBRACE 270
#define RBRACE 271
#define LSQUBRAKT 272
#define RSQUBRAKT 273
#define SEMICOLON 274
#define COMMA 275
#define IntConst 276
#define EQ 277
#define GRAEQ 278
#define LESEQ 279
#define NEQ 280
#define GRA 281
#define LES 282
#define PLUS 283
#define MINUS 284
#define MUL 285
#define DIV 286
#define MOD 287
#define AND 288
#define OR 289
#define NOT 290
#define ASSIGN 291
#define PLUSASSIGN 292
#define MINUSASSIGN 293
#define MULASSIGN 294
#define DIVASSIGN 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 18 "syntax.y"
{
  int yint;
  TreeNode* ynode;
}
/* Line 1529 of yacc.c.  */
#line 134 "syntax.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

