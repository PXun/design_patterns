#pragma once
#include "IVisitor.h"

class CVisitConcreteElementA : public IVisitor
{
public:
    CVisitConcreteElementA();
    ~CVisitConcreteElementA();

public:
    virtual void VisitConcreteElementA(CConcreteElementA * pElementA);
    virtual void VisitConcreteElementB(CConcreteElementB * pElementB);
};