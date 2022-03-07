#include "CObjectStructure.h"

CObjectStructure::CObjectStructure()
{
}

CObjectStructure::~CObjectStructure()
{
}

void CObjectStructure::Attach(IElement * pElement)
{
    m_listElement.push_back(pElement);
}

void CObjectStructure::Detach(IElement * pElement)
{
    m_listElement.remove(pElement);
}

void CObjectStructure::Accept(IVisitor * pVisitor)
{
    for(auto i : m_listElement)
    {
        i->Accept(pVisitor);
    }
}