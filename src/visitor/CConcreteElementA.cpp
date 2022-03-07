#include "CConcreteElementA.h"
#include "IVisitor.h"

CConcreteElementA::CConcreteElementA()
{
}

CConcreteElementA::~CConcreteElementA()
{
}

std::string CConcreteElementA::GetName()
{
    return "CConcreteElementA::GetName()";
}

void CConcreteElementA::Accept(IVisitor * pVisitor)
{
    pVisitor->VisitConcreteElementA(this);
}