#pragma once
#include "IElement.h"

class CConcreteElementA : public IElement
{
public:
    CConcreteElementA();
    ~CConcreteElementA();

public:
    virtual std::string GetName();
    virtual void Accept(IVisitor * pVisitor);
};