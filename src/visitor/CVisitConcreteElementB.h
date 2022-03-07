#pragma once
#include "IVisitor.h"

class CVisitConcreteElementB : public IVisitor
{
public:
    CVisitConcreteElementB();
    ~CVisitConcreteElementB();

public:
    virtual void VisitConcreteElementA(CConcreteElementA * pElementA);
    virtual void VisitConcreteElementB(CConcreteElementB * pElementB);
};