#pragma once
#include <list>
#include "IElement.h"
#include "IVisitor.h"

class CObjectStructure
{
public:
    CObjectStructure();
    ~CObjectStructure();

public:
    void Attach(IElement * pElement);
    void Detach(IElement * pElement);
    void Accept(IVisitor * pVisitor);

private:
    std::list<IElement *> m_listElement;
};