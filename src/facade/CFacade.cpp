#include "CFacade.h"
#include "CSubSystemA.h"
#include "CSubSystemB.h"
#include "CSubSystemC.h"

CFacade::CFacade()
{
    m_pSSA = new CSubSystemA;
    m_pSSB = new CSubSystemB;
    m_pSSC = new CSubSystemC;
}

CFacade::~CFacade()
{
    delete m_pSSA;
    delete m_pSSB;
    delete m_pSSC;
}

void CFacade::MethodA()
{
    m_pSSA->Running();
    m_pSSB->Running();
    m_pSSC->Running();
}

void CFacade::MethodB()
{
    m_pSSB->Running();
    m_pSSC->Running();
}