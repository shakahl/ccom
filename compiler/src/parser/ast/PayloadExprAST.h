// Copyright (c) Marc Auberer 2021. All rights reserved.

//
// Created by Marc on 09.05.2021.
//

#ifndef COMPILER_PAYLOADEXPRAST_H
#define COMPILER_PAYLOADEXPRAST_H

#include <string>

class PayloadExprAST {
private:
    std::string Val;
public:
    explicit PayloadExprAST(std::string val): Val(std::move(val)) {}
};

#endif //COMPILER_PAYLOADEXPRAST_H
