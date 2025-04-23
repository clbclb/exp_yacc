%option noyywrap
%{

#include "yacc.tab.h"

%}

INTCON     [0-9]+
IDENFR     [a-zA-Z_][a-zA-Z0-9_]*
STRCON     \"([^\"\\]|\\.)*\" 

%%

"//"[^\n]*      { /* 忽略单行注释 */ }
"/*"([^*]|"*"+[^*/])*"*"+"/" { /* 忽略多行注释 */ }

"main"              { return MAIN; }
"const"             { return CONST; }
"int"               { return INT; }
"break"             { return BREAK; }
"continue"          { return CONTINUE; }
"if"                { return IF; }
"else"              { return ELSE; }
"while"             { return WHILE; }
"getint"            { return GETINT; }
"printf"            { return PRINTF; }
"return"            { return RETURN; }
"void"              { return VOID; }


"!"                 { return yytext[0]; }
"&&"                { return AND; }
"||"                { return OR; }
"+"                 { return yytext[0]; }
"-"                 { return yytext[0]; }
"*"                 { return yytext[0]; }
"/"                 { return yytext[0]; }
"%"                 { return yytext[0]; }
"<"                 { return LESS; }
"<="                { return LEQ; }
">"                 { return GRE; }
">="                { return GRQ; }
"=="                { return EQL; }
"!="                { return NEQ; }
"="                 { return yytext[0]; }
";"                 { return yytext[0]; }
","                 { return yytext[0]; }
"("                 { return yytext[0]; }
")"                 { return yytext[0]; }
"["                 { return yytext[0]; }
"]"                 { return yytext[0]; }
"{"                 { return yytext[0]; }
"}"                 { return yytext[0]; }

{INTCON}            { return INTCON; }
{IDENFR}            { return IDENFR; }
{STRCON}            { return STRCON; }

[ \t\r\n]+          ;   // 忽略空白符
.                   { printf("TOKEN: UNKNOWN (%s)\n", yytext); }

%%