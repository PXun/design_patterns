#pragma once
#include "../interface/IBeverage.h"
	
class MilkTea : public IBeverage
{
public:
	MilkTea();
	~MilkTea();

public:
	virtual std::string GetName();
	virtual unsigned int GetPrice();
	virtual void SetPrice(unsigned int uiPrice);
	virtual void BeverageComplete();

private:
	unsigned int m_uiPrice;
	static std::string m_strName;
};