#include "CConcreteElementB.h"
#include "IVisitor.h"

CConcreteElementB::CConcreteElementB()
{
}

CConcreteElementB::~CConcreteElementB()
{
}

std::string CConcreteElementB::GetName()
{
    return "CConcreteElementB::GetName()";
}

void CConcreteElementB::Accept(IVisitor * pVisitor)
{
    pVisitor->VisitConcreteElementB(this);
}