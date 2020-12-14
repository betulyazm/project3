/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    HEX_CONSTANT = 259,
    INT_CONSTANT = 260,
    CHAR_CONSTANT = 261,
    STRING_LITERAL = 262,
    LE_OP = 263,
    GE_OP = 264,
    EQ_OP = 265,
    NE_OP = 266,
    AND_OP = 267,
    OR_OP = 268,
    CHAR = 269,
    INT = 270,
    ARRAY = 271,
    POINTER = 272,
    FUNCTION = 273,
    ARROW = 274,
    IF = 275,
    ELSE = 276,
    WHILE = 277,
    RETURN = 278,
    MAIN = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 48 "parser.y" /* yacc.c:1909  */
union value
{
#line 48 "parser.y" /* yacc.c:1909  */

  string strval;
  int intval;
  char charval;
  T_prog prog;
  T_expr expr;
  T_exprlist exprlist;
  E_op op;
  T_stmt stmt;
  T_stmtlist stmtlist;
  T_type type;
  T_typelist typelist;
  T_decl decl;
  T_decllist decllist;
  T_paramlist paramlist;
  T_func func;
  T_funclist funclist;
  T_main main;

#line 99 "parser.tab.h" /* yacc.c:1909  */
};
#line 48 "parser.y" /* yacc.c:1909  */
typedef union value YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
