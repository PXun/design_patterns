#pragma once
#include "CContext.h"

class IExpression
{
public:
    virtual void Interpret(CContext * context) = 0;
};