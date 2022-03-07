#include "CVisitConcreteElementA.h"
#include "CConcreteElementA.h"
#include "CConcreteElementB.h"

CVisitConcreteElementA::CVisitConcreteElementA()
{
}

CVisitConcreteElementA::~CVisitConcreteElementA()
{
}

void CVisitConcreteElementA::VisitConcreteElementA(CConcreteElementA * pElementA)
{
    std::cout << "VisitConcreteElementA - " << pElementA->GetName() << std::endl;
}

void CVisitConcreteElementA::VisitConcreteElementB(CConcreteElementB * pElementB)
{
    std::cout << "VisitConcreteElementA - " << pElementB->GetName() << std::endl;
}