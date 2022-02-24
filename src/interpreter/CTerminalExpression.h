#pragma once
#include "IExpression.h"

class CTerminalExpression : public IExpression
{
public:
    CTerminalExpression();
    ~CTerminalExpression();

public:
    virtual void Interpret(CContext * context);
};