#pragma once
#include "IElement.h"

class CConcreteElementB : public IElement
{
public:
    CConcreteElementB();
    ~CConcreteElementB();

public:
    virtual std::string GetName();
    virtual void Accept(IVisitor * pVisitor);
};