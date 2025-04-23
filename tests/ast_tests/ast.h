#pragma once 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <memory>
#include <iostream>
#include <sstream>
#include <string>

// 全局节点ID计数器，用于生成唯一的节点标识
static int node_id_counter = 0;

// AST节点基类
class BaseAST {
public:
    virtual ~BaseAST() = default;
    
    virtual std::string DumpDOT() const = 0;

    virtual int GetNodeID() const = 0;
    
    static int NewNodeID() {
        return node_id_counter++;
    }
};

// 类型枚举
enum Type {
    TYPE_INT,
    TYPE_VOID,
    TYPE_CONST
};

class CompUnitAST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::unique_ptr<BaseAST>> decl, func_decl;
    std::unique_ptr<BaseAST> main_func_def;
    
    CompUnitAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }

    std::string DumpDOT() const override {
        std::stringstream ss;

        ss << "  node" << node_id << " [label=\"CompUnit\", shape=box, style=filled, fillcolor=lightblue];\n";

        for (auto &son : decl) {
            ss << "  node" << node_id << " -> node" << son->GetNodeID() << " [label=\"decl\"];\n";
            ss << son->DumpDOT();
        }

        for (auto &son : func_decl) {
            ss << "  node" << node_id << " -> node" << son->GetNodeID();
            ss << son->DumpDOT();
        }

        if (main_func_def) {
            ss << "  node" << node_id << " -> node" << main_func_def->GetNodeID();
            ss << main_func_def->DumpDOT();
        }
        return ss.str();
    }
};
class CompUnit1ListAST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::unique_ptr<BaseAST>> decl, func_decl;
    std::unique_ptr<BaseAST> main_func_def;
    
    CompUnit1ListAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        return ss.str();
    }
};
class CompUnit1AST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::unique_ptr<BaseAST>> decl, func_decl;
    std::unique_ptr<BaseAST> main_func_def;
    
    CompUnit1AST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        return ss.str();
    }
};
class CompUnit2AST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::unique_ptr<BaseAST>> decl, func_decl;
    std::unique_ptr<BaseAST> main_func_def;
    
    CompUnit2AST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        return ss.str();
    }
};
class CompUnit3AST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::unique_ptr<BaseAST>> decl, func_decl;
    std::unique_ptr<BaseAST> main_func_def;
    
    CompUnit3AST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        return ss.str();
    }
};
class CompUnit4AST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::unique_ptr<BaseAST>> decl, func_decl;
    std::unique_ptr<BaseAST> main_func_def;

    CompUnit4AST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        return ss.str();
    }
};
class CompUnit5AST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::unique_ptr<BaseAST>> decl, func_decl;

    CompUnit5AST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        return ss.str();
    }
};
class DeclAST : public BaseAST {
private:
    int node_id;
public:
    Type type;
    std::string name;
    std::unique_ptr<BaseAST> Array, Val;
    std::unique_ptr<DeclAST> nxt; //写成链表的形式

    DeclAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        if (type == TYPE_CONST) {
            ss << "  node" << node_id << " [label=\"ConstDecl\\n";
        }
        else {
            ss << "  node" << node_id << " [label=\"VarDecl\\n";
        }
        ss << name;
        if (Array) ss << Array->DumpDOT();
        if (Val) ss << "=" << Val->DumpDOT();
        ss << "\\n";
        DeclAST* now = nxt.get();
        while (now) {
            ss << now->name;
            if (now->Array) ss << now->Array->DumpDOT();
            if (now->Val) ss << now->Val->DumpDOT();
            ss << "\\n";
            now = nxt.get();
        }
        ss << "\", shape=box, style=filled, fillcolor=lightyellow];\n";
        return ss.str();
    }
};
class FuncDeclAST : public BaseAST {
private:
    int node_id;
public:
    Type type;
    std::string name;
    std::unique_ptr<BaseAST> FuncFParams, Block;

    FuncDeclAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        ss << " [label=\"";
        if (name == "main") ss << "main";
        ss << "funcdef\"];\n";
        std::string s1 = (name == "main" ? "MainFuncDecl" : "FuncDecl");
        std::string s2 = (name == "main" ? "lightgrey" : "lightcoral");

        ss << "  node" << node_id << " [label=\"" << s1 << "\\n";
        if (type == TYPE_VOID) ss << "void\\n";
        else ss << "int\\n";
        ss << name << "(";
        if (FuncFParams) ss << FuncFParams->DumpDOT();
        ss << ")\\n";
        ss << "\", shape=box, style=filled, fillcolor=" << s2 << "]\n";

        ss << "  node" << node_id << " -> node" << Block->GetNodeID() << ";\n";
        ss << Block->DumpDOT();
        
        return ss.str();
    }
};
class FuncFParamsAST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::string> params;

    FuncFParamsAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        for (int i = 0; i < (int)params.size(); i++) {
            ss << "int " << params[i];
            if (i + 1 < (int)params.size()) {
                ss << ", ";
            }
        }
        return ss.str();
    }
};
class BlockAST : public BaseAST {
private:
    int node_id;
public:
    std::vector<std::unique_ptr<BaseAST>> BlockItem;
    BlockAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        ss << "  node" << node_id << " [label = \"Block\", shape=box, style=filled, fillcolor=lightgreen]\n";
        for (int i = 0; i < BlockItem.size(); i++) {
            ss << "  node" << node_id << " -> node" << BlockItem[i]->GetNodeID() << " [label=\"BlockItem " << i + 1 << "\"]\n";
            ss << BlockItem[i]->DumpDOT();
        }
        return ss.str();
    }
};
enum BlockItemType {
    block_decl,
    block_give_value,
    block_exp,
    block_block,
    block_if,
    block_while,
    block_break,
    block_continue,
    block_return,
    block_getint,
    block_printf,
    block_empty
};
class BlockItemAST : public BaseAST {
private:
    int node_id;
public:
    BlockItemType type;
    std::unique_ptr<BaseAST> item;

    BlockItemAST() : node_id(NewNodeID()), type(block_empty) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;

        
        if (type == block_break) {
            ss << "  node" << node_id << "[label=\"BlockItem\\nbreak\", shape=box, style=filled, fillcolor=lightskyblue]\n";
        }
        else if (type == block_continue) {
            ss << "  node" << node_id << "[label=\"BlockItem\\ncontinue\", shape=box, style=filled, fillcolor=lightskyblue]\n";
        }
        else if (type == block_return) {
            ss << "  node" << node_id << "[label=\"BlockItem\\nreturn\\n";
            ss << item->DumpDOT() << "\\n";
            ss << "\", shape=box, style=filled, fillcolor=lightskyblue]\n";
        }
        else if (type == block_exp) {
            ss << "  node" << node_id << "[label=\"BlockItem\\nexp\\n";
            ss << item->DumpDOT() << "\\n";
            ss << "\", shape=box, style=filled, fillcolor=lightskyblue]\n";
        }
        else {
            ss << "  node" << node_id << "[label=\"BlockItem\", shape=box, style=filled, fillcolor=lightskyblue]\n";
            ss << "  node" << node_id << " -> node" << item->GetNodeID() << "\n";
            ss << item->DumpDOT();
        }

        return ss.str();
    }
};
class GiveValueAST : public BaseAST {
private:
    int node_id;
public:
    std::unique_ptr<BaseAST> LVal, exp;

    GiveValueAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        ss << "  node" << node_id << " [label=\"Stmt\\n";
        ss << LVal->DumpDOT() << "=" << exp->DumpDOT();
        ss << "\"]\n";
        return ss.str();
    }
};
class LValAST : public BaseAST {
private:
    int node_id;
public:
    std::string name;
    std::unique_ptr<BaseAST> array;

    LValAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    std::string to_str() {
        std::string s;
        s = name;
        if (array) {
            s = s + "[" + array->DumpDOT() + "]";
        }
        return s;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        ss << name;
        if (array) ss << array->DumpDOT();
        return ss.str();
    }
};
class IfAST : public BaseAST {
private:
    int node_id;
public:

    std::unique_ptr<BaseAST> cond, ifstmt, elsestmt;
    IfAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        ss << "  node" << node_id << " [label=\"If\\n";
        ss << "cond: " << cond->DumpDOT() << "\\n";
        ss << "\"]\n";
        ss << "  node" << node_id << " -> node" << ifstmt->GetNodeID() << " [label=\"ifstmt\"]\n";
        ss << ifstmt->DumpDOT();
        if (elsestmt) {
            ss << "  node" << node_id << " -> node" << elsestmt->GetNodeID() << " [label=\"elsestmt\"]\n";
            ss << elsestmt->DumpDOT();
        }
        return ss.str();
    }
};
class WhileAST : public BaseAST {
private:
    int node_id;
public:

    std::unique_ptr<BaseAST> cond, stmt;
    WhileAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        ss << "  node" << node_id << " [label=\"while\\n";
        ss << "cond: " << cond->DumpDOT() << "\\n";
        ss << "\"]\n";
        ss << "  node" << node_id << " -> node" << stmt->GetNodeID() << " [label=\"stmt\"]\n";
        ss << stmt->DumpDOT();
        return ss.str();
    }
};
class PrintfAST : public BaseAST {
private:
    int node_id;
public:
    std::string s;
    std::vector<std::unique_ptr<BaseAST>> exp;

    PrintfAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        ss << "  node" << node_id << " [label=\"printf\\n";
        std::string s2;
        for (auto c : s) {
            if (c == '\"') s2 += "\\";
            if (c == '\\') s2 += "\\";
            s2 += c;
        }
        ss << s2 << "\\n";
        for (int i = 0; i < exp.size(); i++) {
            ss << exp[i]->DumpDOT();
            if (i + 1 < exp.size()) ss << ",";
        }
        ss << "\"]\n";
        return ss.str();
    }
};
class ExpAST : public BaseAST {
private:
    int node_id;
public:
    std::string exp;
    ExpAST() : node_id(NewNodeID()) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        ss << exp;
        return ss.str();
    }    
};
class InitValAST : public BaseAST {
private:
    int node_id;
public:
    bool brace;
    std::vector<std::unique_ptr<BaseAST>> exp;
    InitValAST() : node_id(NewNodeID()), brace(false) {}

    int GetNodeID() const override {
        return node_id;
    }
    //因为yacc.y中直接转移了元素，因此不会经过这种类型
    std::string DumpDOT() const override {
        std::stringstream ss;
        if (brace) ss << "{";
        for (auto &now : exp) ss << now->DumpDOT();
        if (brace) ss << "}";
        return ss.str();
    }    
};