%option noyywrap
%{

#include <stdio.h>
#include <stdlib.h>

%}

INTCON     [0-9]+
IDENFR     [a-zA-Z_][a-zA-Z0-9_]*
STRCON     \"([^\"\\]|\\.)*\" 

%%

"//"[^\n]*      { /* 忽略单行注释 */ }
"/*"([^*]|"*"+[^*/])*"*"+"/" { /* 忽略多行注释 */ }

"main"              { printf("MAINTK main\n"); }
"const"             { printf("CONSTTK const\n"); }
"int"               { printf("INTTK int\n"); }
"break"             { printf("BREAKTK break\n"); }
"continue"          { printf("CONTINUETK continue\n"); }
"if"                { printf("IFTK if\n"); }
"else"              { printf("ELSETK else\n"); }
"while"             { printf("WHILETK while\n"); }
"getint"            { printf("GETINTTK getint\n"); }
"printf"            { printf("PRINTFTK printf\n"); }
"return"            { printf("RETURNTK return\n"); }
"void"              { printf("VOIDTK void\n"); }





"!"                 { printf("NOT !\n"); }
"&&"                { printf("AND &&\n"); }
"||"                { printf("OR ||\n"); }
"+"                 { printf("PLUS +\n"); }
"-"                 { printf("MINU -\n"); }
"*"                 { printf("MULT *\n"); }
"/"                 { printf("DIV /\n"); }
"%"                 { printf("MOD %%\n"); }
"<"                 { printf("LSS <\n"); }
"<="                { printf("LEQ <=\n"); }
">"                 { printf("GRE >\n"); }
">="                { printf("GRQ >=\n"); }
"=="                { printf("EQL ==\n"); }
"!="                { printf("NEQ !=\n"); }
"="                 { printf("ASSIGN =\n"); }
";"                 { printf("SEMICN ;\n"); }
","                 { printf("COMMA ,\n"); }
"("                 { printf("LPARENT %s\n", yytext); }
")"                 { printf("RPARENT %s\n", yytext); }
"["                 { printf("LBRACK %s\n", yytext); }
"]"                 { printf("RBRACK %s\n", yytext); }
"{"                 { printf("LBRACE %s\n", yytext); }
"}"                 { printf("RBRACE %s\n", yytext); }

{INTCON}            { printf("INTCON %s\n", yytext); }
{IDENFR}            { printf("IDENFR %s\n", yytext); }
{STRCON}            { printf("STRCON %s\n", yytext); }

[ \t\r\n]+          ;   // 忽略空白符
.                   { printf("TOKEN: UNKNOWN (%s)\n", yytext); }

%%

int main(int argc, char *argv[]) {
    yyin = stdin;
    yylex();
    return 0;
}