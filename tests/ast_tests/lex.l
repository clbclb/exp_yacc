%option noyywrap
%{
#include <cstdlib>
#include <cstring>
#include <string>
#include "ast.h"
#include "yacc.tab.h"

// 字符串复制辅助函数
char* my_strdup(const char* s) {
    char* p = (char*)malloc(strlen(s) + 1);
    if (p) strcpy(p, s);
    return p;
}

using std::string;
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

{INTCON}            { yylval.str_val = my_strdup(yytext); return INTCON; } //exp全部都用字符串表示
{IDENFR}            { yylval.str_val = my_strdup(yytext); return IDENFR; }
{STRCON}            { yylval.str_val = my_strdup(yytext); return STRCON; }

[ \t\r\n]+          ;   // 忽略空白符
.                   { printf("TOKEN: UNKNOWN (%s)\n", yytext); }

%%