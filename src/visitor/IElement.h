#pragma once
#include "IVisitor.h"

class IElement
{
public:
    virtual std::string GetName() = 0;
    virtual void Accept(IVisitor * pVisitor) = 0;
};