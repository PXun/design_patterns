#include "Pudding.h"  

unsigned int Pudding::m_uiCount = 0;
std::string Pudding::m_strName = "Pudding";

Pudding::Pudding(IBeverage *pBeverage)
: m_uiPrice(3)
, m_pBeverage(pBeverage)
{
}

Pudding::~Pudding()
{
}

std::string Pudding::GetName()
{
    return m_strName;
}

unsigned int Pudding::GetPrice()
{
    unsigned int uiPrice = m_uiPrice;

    if(nullptr != m_pBeverage)
    {
        uiPrice += m_pBeverage->GetPrice();
    }

    return uiPrice;
}

void Pudding::SetPrice(unsigned int uiPrice)
{
    m_uiPrice = uiPrice;
}

void Pudding::BeverageComplete()
{
    if(nullptr != m_pBeverage)
    {
        std::cout << m_strName << " + ";
        m_pBeverage->BeverageComplete();
    }
}

unsigned int Pudding::GetCount()
{
    return m_uiCount;
}

void Pudding::SetCount(unsigned int uiCount)
{
    m_uiCount = uiCount;
}