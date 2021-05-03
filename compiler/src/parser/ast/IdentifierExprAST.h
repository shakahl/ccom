//
// Created by Marc on 04.05.2021.
//

#ifndef COMPILER_IDENTIFIEREXPRAST_H
#define COMPILER_IDENTIFIEREXPRAST_H

#include <string>
#include <utility>

class IdentifierExprAST {
private:
    std::string Name;
public:
    IdentifierExprAST(std::string Name) : Name(std::move(Name)) {}
};

#endif //COMPILER_IDENTIFIEREXPRAST_H
