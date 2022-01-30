#include "MilkTea.h"

std::string MilkTea::m_strName = "MilkTea";
	
MilkTea::MilkTea()
: m_uiPrice(12)
{
}
	
MilkTea::~MilkTea()
{
}

std::string MilkTea::GetName()
{
    return m_strName;
}

unsigned int MilkTea::GetPrice()
{
    return m_uiPrice;
}

void MilkTea::SetPrice(unsigned int uiPrice)
{
    m_uiPrice = uiPrice;
}

void MilkTea::BeverageComplete()
{
    std::cout << m_strName << std::endl;
}