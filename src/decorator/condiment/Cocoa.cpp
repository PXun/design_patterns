#include "Cocoa.h"  

unsigned int Cocoa::m_uiCount = 0;
std::string Cocoa::m_strName = "Cocoa";

Cocoa::Cocoa(IBeverage *pBeverage)
: m_uiPrice(2)
, m_pBeverage(pBeverage)
{
}

Cocoa::~Cocoa()
{
}

std::string Cocoa::GetName()
{
    return m_strName;
}

unsigned int Cocoa::GetPrice()
{
    unsigned int uiPrice = m_uiPrice;

    if(nullptr != m_pBeverage)
    {
        uiPrice += m_pBeverage->GetPrice();
    }

    return uiPrice;
}

void Cocoa::SetPrice(unsigned int uiPrice)
{
    m_uiPrice = uiPrice;
}

void Cocoa::BeverageComplete()
{
    if(nullptr != m_pBeverage)
    {
        std::cout << m_strName << " + ";
        m_pBeverage->BeverageComplete();
    }
}

unsigned int Cocoa::GetCount()
{
    return m_uiCount;
}

void Cocoa::SetCount(unsigned int uiCount)
{
    m_uiCount = uiCount;
}