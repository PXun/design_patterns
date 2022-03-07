#include "CVisitConcreteElementB.h"
#include "CConcreteElementA.h"
#include "CConcreteElementB.h"

CVisitConcreteElementB::CVisitConcreteElementB()
{
}

CVisitConcreteElementB::~CVisitConcreteElementB()
{
}

void CVisitConcreteElementB::VisitConcreteElementA(CConcreteElementA * pElementA)
{
    std::cout << "VisitConcreteElementB - " << pElementA->GetName() << std::endl;
}

void CVisitConcreteElementB::VisitConcreteElementB(CConcreteElementB * pElementB)
{
    std::cout << "VisitConcreteElementB - " << pElementB->GetName() << std::endl;
}