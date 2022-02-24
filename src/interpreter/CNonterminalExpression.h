#pragma once
#include "IExpression.h"

class CNonterminalExpression : public IExpression
{
public:
    CNonterminalExpression();
    ~CNonterminalExpression();

public:
    virtual void Interpret(CContext * context);
};