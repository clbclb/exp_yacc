%{
#define YYDEBUG 1

#include <cstdio>
#include <cstdlib>
#include <string>
#include <memory>
#include "ast.h"

// 声明全局根变量
std::unique_ptr<BaseAST> root;

int yylex();
void yyerror(const char *s);
extern char* yytext;

%}

// 定义语义值的可能类型
%union {
    BaseAST* ast_ptr;  // 用于AST节点指针
    int int_val;       // 用于整数值
    char* str_val;     // 用于字符串和标识符名称
}

%token MAIN CONST INT BREAK CONTINUE IF ELSE WHILE GETINT PRINTF RETURN VOID
%token AND OR LESS LEQ GRE GRQ EQL NEQ
%token <str_val> INTCON 
%token <str_val> IDENFR STRCON

%type <ast_ptr> CompUnit CompUnit1List CompUnit1 CompUnit2 MainFuncDef CompUnit5
%type <ast_ptr> Array VarDef_value VarDefList VarDef CompUnit3 ConstDefList ConstDef InitVal ExpList
%type <ast_ptr> FuncFParams_ FuncFParams FuncFParam CompUnit4 Block BlockItemList BlockItem
%type <ast_ptr> Stmt Stmt1 Stmt_else Stmt_exp Stmt_exp2 Exp Cond LVal PrimaryExp
%type <ast_ptr> UnaryExp UnaryOp FuncRParams_ FuncRParams MulExp MulOp AddExp AddOp
%type <ast_ptr> RelExp RelOp EqExp EqOp LAndExp LOrExp

%start CompUnit
%%

//CompUnit ConstDecl VarDecl
//FuncDef MainFuncDef Block Stmt

/*CompUnit
                            1
                            |
        ------------------------------------------
        | int               | const              | void
        2                   3                    4
        |
------------
| IDENFR   | MAIN
5        
|
-------
|(    | [=;

*/

CompUnit : CompUnit1List {
    auto ast = std::make_unique<CompUnitAST>();
    std::unique_ptr<CompUnit1ListAST> old(static_cast<CompUnit1ListAST*>($1));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    root = std::move(ast);  // 设置全局根节点
};
CompUnit1List : CompUnit1 {
    auto ast = std::make_unique<CompUnit1ListAST>();
    std::unique_ptr<CompUnit1AST> old(static_cast<CompUnit1AST*>($1));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    $$ = ast.release();
} | CompUnit1List CompUnit1 {
    auto ast = std::make_unique<CompUnit1ListAST>();
    std::unique_ptr<CompUnit1ListAST> old(static_cast<CompUnit1ListAST*>($1));
    std::unique_ptr<CompUnit1AST> old2(static_cast<CompUnit1AST*>($2));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    for (auto &now : old2->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old2->func_decl) ast->func_decl.push_back(std::move(now));
    if (old2->main_func_def) ast->main_func_def = std::move(old2->main_func_def);

    $$ = ast.release();
};
CompUnit1 : INT CompUnit2{
    auto ast = std::make_unique<CompUnit1AST>();
    std::unique_ptr<CompUnit2AST> old(static_cast<CompUnit2AST*>($2));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    $$ = ast.release();
} | CONST CompUnit3 {
    auto ast = std::make_unique<CompUnit1AST>();
    std::unique_ptr<CompUnit3AST> old(static_cast<CompUnit3AST*>($2));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    $$ = ast.release();
} | VOID CompUnit4 {
    auto ast = std::make_unique<CompUnit1AST>();
    std::unique_ptr<CompUnit4AST> old(static_cast<CompUnit4AST*>($2));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    $$ = ast.release();
};
CompUnit2 : IDENFR CompUnit5 {
    auto ast = std::make_unique<CompUnit2AST>();
    std::unique_ptr<CompUnit5AST> old(static_cast<CompUnit5AST*>($2));

    if (old->decl.size()) {
        std::unique_ptr<DeclAST> now(static_cast<DeclAST*>(old->decl[0].release()));
        now->name = std::string($1);
        now->type = TYPE_INT;
        ast->decl.push_back(std::move(now));
    }

    if (old->func_decl.size()) {
        std::unique_ptr<FuncDeclAST> now(static_cast<FuncDeclAST*>(old->func_decl[0].release()));
        now->name = std::string($1);
        now->type = TYPE_INT;
        ast->func_decl.push_back(std::move(now));
    }

    $$ = ast.release();
}| MainFuncDef{
    auto ast = std::make_unique<CompUnit2AST>();
    std::unique_ptr<FuncDeclAST> old(static_cast<FuncDeclAST*>($1));

    old->type = TYPE_INT;
    ast->func_decl.push_back(std::move(old));

    $$ = ast.release();
};
MainFuncDef : MAIN '(' ')' Block {
    auto ast = std::make_unique<FuncDeclAST>();
    std::unique_ptr<BlockAST> old(static_cast<BlockAST*>($4));

    ast->name = "main";
    ast->Block = std::move(old);

    $$ = ast.release();
};
CompUnit5 : '(' FuncFParams_ ')' Block {
    auto ast0 = std::make_unique<CompUnit5AST>();

    auto ast = std::make_unique<FuncDeclAST>();
    std::unique_ptr<FuncFParamsAST> old1(static_cast<FuncFParamsAST*>($2));
    std::unique_ptr<BlockAST> old2(static_cast<BlockAST*>($4));

    ast->FuncFParams = std::move(old1);
    ast->Block = std::move(old2);

    ast0->func_decl.push_back(std::move(ast));
    $$ = ast0.release();
} | Array VarDef_value VarDefList ';' {
    auto ast0 = std::make_unique<CompUnit5AST>();

    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<InitValAST> old2(static_cast<InitValAST*>($2));
    std::unique_ptr<DeclAST> old3(static_cast<DeclAST*>($3));

    if (old1->exp.length()) {
        ast->Array = std::move(old1);
    }
    if (old2->brace || old2->exp.size()) {
        ast->Val = std::move(old2);
    }
    if (old3->name.length()) {
        ast->nxt = std::move(old3);
    }

    ast0->decl.push_back(std::move(ast));
    $$ = ast0.release();
};
Array : {
    auto ast = std::make_unique<ExpAST>();
    $$ = ast.release();
}| '[' Exp ']'{
    $$ = $2;
};
VarDef_value : {
    auto ast = std::make_unique<InitValAST>();
    $$ = ast.release();
}| '=' InitVal {
    $$ = $2;
};
VarDefList :  {
    auto ast = std::make_unique<DeclAST>();
    $$ = ast.release();
}| VarDefList ',' VarDef {
    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<DeclAST> old1(static_cast<DeclAST*>($1));
    std::unique_ptr<DeclAST> old2(static_cast<DeclAST*>($3));
    ast = std::move(old1);
    if (ast->name.length()) {
        DeclAST* now = ast.get();
        while (now->nxt) {
            now = now->nxt.get();
        }
        now->nxt = std::move(old2);
    }
    else {
        ast = std::move(old2);
    }
    $$ = ast.release();
};
VarDef : IDENFR Array VarDef_value {
    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($2));
    std::unique_ptr<InitValAST> old2(static_cast<InitValAST*>($3));

    ast->name = std::string($1);
    if (old1->exp.length()) ast->Array = std::move(old1);
    if (old2->brace || old2->exp.size()) ast->Val = std::move(old2);

    $$ = ast.release();
};

CompUnit3 : INT ConstDefList ';' {
    auto ast0 = std::make_unique<CompUnit3AST>();

    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<DeclAST> old1(static_cast<DeclAST*>($2));
    
    old1->type = TYPE_CONST;
    ast = std::move(old1);

    ast0->decl.push_back(std::move(ast));
    $$ = ast0.release();
};
ConstDefList : ConstDef {
    $$ = $1;
}| ConstDefList ',' ConstDef {
    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<DeclAST> old1(static_cast<DeclAST*>($1));
    std::unique_ptr<DeclAST> old2(static_cast<DeclAST*>($3));
    
    ast = std::move(old1);
    DeclAST* now = ast.get();
    while (now->nxt) {
        now = now->nxt.get();
    }
    now->nxt = std::move(old2);

    $$ = ast.release();
};
ConstDef : IDENFR Array '=' InitVal{
    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($2));
    std::unique_ptr<InitValAST> old2(static_cast<InitValAST*>($4));

    ast->name = std::string($1);
    if (old1->exp.length()) ast->Array = std::move(old1);
    if (old2->brace || old2->exp.size()) ast->Val = std::move(old2);

    $$ = ast.release();
};

InitVal : Exp {
    auto ast = std::make_unique<InitValAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));

    ast->exp.push_back(std::move(old1));

    $$ = ast.release();
}| '{' ExpList '}' {
    auto ast = std::make_unique<InitValAST>();
    std::unique_ptr<InitValAST> old1(static_cast<InitValAST*>($2));

    old1->brace = true;
    ast = std::move(old1);

    $$ = ast.release();
};
ExpList : Exp {
    auto ast = std::make_unique<InitValAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));

    ast->exp.push_back(std::move(old1));

    $$ = ast.release();
}| ExpList ',' Exp {
    auto ast = std::make_unique<InitValAST>();
    std::unique_ptr<InitValAST> old1(static_cast<InitValAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($3));

    old1->exp.push_back(std::move(old2));
    ast = std::move(old1);

    $$ = ast.release();
};

FuncFParams_ : {
    auto ast = std::make_unique<FuncFParamsAST>();
    $$ = ast.release();
}| FuncFParams {
    $$ = $1;
};
FuncFParams : FuncFParam {
    $$ = $1;
}| FuncFParams ',' FuncFParam {
    auto ast = std::make_unique<FuncFParamsAST>();
    std::unique_ptr<FuncFParamsAST> old1(static_cast<FuncFParamsAST*>($1));
    std::unique_ptr<FuncFParamsAST> old2(static_cast<FuncFParamsAST*>($3));

    for (auto now : old2->params) {
        old1->params.push_back(now);
    }
    ast = std::move(old1);

    $$ = ast.release();
};
FuncFParam : INT IDENFR {
    auto ast = std::make_unique<FuncFParamsAST>();
    
    ast->params.push_back(std::string($2));

    $$ = ast.release();
};

CompUnit4 : IDENFR '(' FuncFParams_ ')' Block {
    auto ast = std::make_unique<FuncDeclAST>();
    std::unique_ptr<FuncFParamsAST> old1(static_cast<FuncFParamsAST*>($3));
    std::unique_ptr<BlockAST> old2(static_cast<BlockAST*>($5));

    ast->type = TYPE_VOID;
    ast->name = std::string($1);
    ast->FuncFParams = std::move(old1);
    ast->Block = std::move(old2);

    $$ = ast.release();
};

Block : '{' BlockItemList '}' {
    $$ = $2;
};
BlockItemList : BlockItem {
    auto ast = std::make_unique<BlockAST>();
    std::unique_ptr<BlockItemAST> old1(static_cast<BlockItemAST*>($1));

    ast->BlockItem.push_back(std::move(old1));

    $$ = ast.release();
}| BlockItemList BlockItem {
    auto ast = std::make_unique<BlockAST>();
    std::unique_ptr<BlockAST> old1(static_cast<BlockAST*>($1));
    std::unique_ptr<BlockItemAST> old2(static_cast<BlockItemAST*>($2));

    old1->BlockItem.push_back(std::move(old2));
    ast = std::move(old1);

    $$ = ast.release();
};
BlockItem : CompUnit1 {
    auto ast = std::make_unique<BlockItemAST>();
    std::unique_ptr<CompUnit1AST> old1(static_cast<CompUnit1AST*>($1));

    ast->type = block_decl;
    ast->item = std::move(old1->decl[0]);

    $$ = ast.release();
}| Stmt { //因为代码一定正确，因此可以把CompUnit弄过来定义，二者first无交集
    $$ = $1;
}; 
       
Stmt : LVal '=' Stmt1{
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<GiveValueAST>();
    std::unique_ptr<LValAST> old1(static_cast<LValAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($3));

    ast->LVal = std::move(old1);
    ast->exp = std::move(old2);
    
    ast0->item = std::move(ast);
    ast0->type = block_give_value;
    $$ = ast0.release();
}| ';' {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<ExpAST>();
    
    ast0->item = std::move(ast);
    ast0->type = block_exp;
    $$ = ast0.release();
}| Exp ';' {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    ast = std::move(old1);

    ast0->item = std::move(ast);
    ast0->type = block_exp;
    $$ = ast0.release();
}| Block {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<BlockAST>();
    std::unique_ptr<BlockAST> old1(static_cast<BlockAST*>($1));
    ast = std::move(old1);

    ast0->item = std::move(ast);
    ast0->type = block_block;
    $$ = ast0.release();
}| IF '(' Cond ')' Stmt Stmt_else {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<IfAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($3));
    std::unique_ptr<BlockItemAST> old2(static_cast<BlockItemAST*>($5));
    std::unique_ptr<BlockItemAST> old3(static_cast<BlockItemAST*>($6));

    ast->cond = std::move(old1);
    ast->ifstmt = std::move(old2);
    if (old3->type != block_empty) ast->elsestmt = std::move(old3);

    ast0->item = std::move(ast);
    ast0->type = block_if;
    $$ = ast0.release();
}| WHILE '(' Cond ')' Stmt {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<WhileAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($3));
    std::unique_ptr<BlockItemAST> old2(static_cast<BlockItemAST*>($5));

    ast->cond = std::move(old1);
    ast->stmt = std::move(old2);

    ast0->item = std::move(ast);
    ast0->type = block_while;
    $$ = ast0.release();
}| BREAK ';' {
    auto ast0 = std::make_unique<BlockItemAST>();
    ast0->type = block_break;
    $$ = ast0.release();
}| CONTINUE ';' {
    auto ast0 = std::make_unique<BlockItemAST>();
    ast0->type = block_continue;
    $$ = ast0.release();
}| RETURN Stmt_exp ';' {
    auto ast0 = std::make_unique<BlockItemAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($2));

    ast0->type = block_return;
    if (old1->exp.length()) {
        ast0->item = std::move(old1);
    }

    $$ = ast0.release();
}| PRINTF '(' STRCON Stmt_exp2')' ';' {
    auto ast0 = std::make_unique<BlockItemAST>();
    
    auto ast = std::make_unique<PrintfAST>();
    std::unique_ptr<PrintfAST> old1(static_cast<PrintfAST*>($4));

    ast->s = std::string($3);
    ast->exp = std::move(old1->exp);

    ast0->item = std::move(ast);
    ast0->type = block_printf;
    $$ = ast0.release();
};
Stmt1 :  Exp ';' {
    $$ = $1;
}| GETINT '(' ')' ';' {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "getint()";

    $$ = ast.release();
};
Stmt_else : {
    auto ast = std::make_unique<BlockItemAST>();
    $$ = ast.release();
}| ELSE Stmt {
    $$ = $2;
};
Stmt_exp  : {
    auto ast = std::make_unique<ExpAST>();
    $$ = ast.release();
}| Exp {
    $$ = $1;
};
Stmt_exp2 : {
    auto ast = std::make_unique<PrintfAST>();
    $$ = ast.release();
}| Stmt_exp2 ',' Exp {
    auto ast = std::make_unique<PrintfAST>();
    std::unique_ptr<PrintfAST> old1(static_cast<PrintfAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($3));

    old1->exp.push_back(std::move(old2));
    ast = std::move(old1);

    $$ = ast.release();
};

Exp : AddExp {
    $$ = $1;
};
Cond : LOrExp {
    $$ = $1;
};
LVal : IDENFR Array {
    auto ast = std::make_unique<LValAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($2));

    ast->name = std::string($1);
    if (old1->exp.length()) {
        ast->array = std::move(old1);
    }

    $$ = ast.release();
};
PrimaryExp : '(' Exp ')' {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($2));

    ast->exp = "(" + old1->exp + ")";

    $$ = ast.release();
} | LVal {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<LValAST> old1(static_cast<LValAST*>($1));

    ast->exp = old1->to_str();

    $$ = ast.release();
}| INTCON {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = std::string($1);

    $$ = ast.release();
};
UnaryExp : PrimaryExp {
    $$ = $1;
}| IDENFR '(' FuncRParams_ ')'{
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($3));
    
    ast->exp = std::string($1) + "(" + old1->exp + ")";

    $$ = ast.release();
} | UnaryOp UnaryExp {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($2));
    
    ast->exp = old1->exp + old2->exp;

    $$ = ast.release();
};
UnaryOp : '+' {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "+";

    $$ = ast.release();
}| '-' {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "-";

    $$ = ast.release();
}| '!' {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "!";

    $$ = ast.release();
};
FuncRParams_ : {
    auto ast = std::make_unique<ExpAST>();
    $$ = ast.release();
}| FuncRParams {
    $$ = $1;
};
FuncRParams : Exp {
    $$ = $1;
}| FuncRParams ',' Exp {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($3));

    ast->exp = old1->exp + "," + old2->exp;

    $$ = ast.release();
};
MulExp : UnaryExp {
    $$ = $1;
} | MulExp MulOp UnaryExp {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($2));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>($3));

    ast->exp = old1->exp + old2->exp + old3->exp;

    $$ = ast.release();
};
MulOp : '*' {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "*";

    $$ = ast.release();
}| '/' { 
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "/";

    $$ = ast.release();
}| '%' {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "%";

    $$ = ast.release();
};
AddExp : MulExp {
    $$ = $1;
}| AddExp AddOp MulExp {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($2));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>($3));

    ast->exp = old1->exp + old2->exp + old3->exp;

    $$ = ast.release();
};
AddOp : '+' {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "+";

    $$ = ast.release();
} | '-' {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "-";

    $$ = ast.release();
};
RelExp : AddExp {
    $$ = $1;
} | RelExp RelOp AddExp {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($2));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>($3));

    ast->exp = old1->exp + old2->exp + old3->exp;

    $$ = ast.release();
};
RelOp : LESS {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "<";

    $$ = ast.release();
} | GRE {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = ">";

    $$ = ast.release();
} | LEQ { 
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "<=";

    $$ = ast.release();
}| GRQ {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = ">=";

    $$ = ast.release();
};
EqExp : RelExp {
    $$ = $1;
} | EqExp EqOp RelExp {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>($2));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>($3));

    ast->exp = old1->exp + old2->exp + old3->exp;

    $$ = ast.release();
};
EqOp : EQL {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "==";

    $$ = ast.release();
} | NEQ {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "!=";

    $$ = ast.release();
};
LAndExp : EqExp {
    $$ = $1;
} | LAndExp AND EqExp {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>($3));

    ast->exp = old1->exp + "&&" + old3->exp;

    $$ = ast.release();
};
LOrExp : LAndExp {
    $$ = $1;
} | LOrExp OR LAndExp {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>($1));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>($3));

    ast->exp = old1->exp + "||" + old3->exp;

    $$ = ast.release();
};


%% 

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

