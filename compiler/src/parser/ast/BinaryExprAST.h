//
// Created by Marc on 04.05.2021.
//

#ifndef COMPILER_BINARYEXPRAST_H
#define COMPILER_BINARYEXPRAST_H

#include <memory>
#include <utility>
#include "../../lexer/Token.h"
#include "ExprAST.h"

class BinaryExprAST {
private:
    Token Op;
    std::unique_ptr<ExprAST> LHS, RHS;
public:
    BinaryExprAST(Token op, std::unique_ptr<ExprAST> LHS,
                  std::unique_ptr<ExprAST> RHS)
            : Op(std::move(op)), LHS(std::move(LHS)), RHS(std::move(RHS)) {}
};

#endif //COMPILER_BINARYEXPRAST_H