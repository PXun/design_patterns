#pragma once
#include <iostream>

class CConcreteElementA;
class CConcreteElementB;

class IVisitor
{
public:
    virtual void VisitConcreteElementA(CConcreteElementA * pElementA) = 0;
    virtual void VisitConcreteElementB(CConcreteElementB * pElementB) = 0;
};