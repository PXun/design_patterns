
#pragma once
#include "../interface/ICondiment.h"

class Pudding : public ICondiment
{
private:
	IBeverage *m_pBeverage;

public:
	Pudding(IBeverage *pBeverage);
	~Pudding();

public:
	virtual std::string GetName();
	virtual unsigned int GetPrice();
	virtual void SetPrice(unsigned int uiPrice);
	virtual void BeverageComplete();

public:
	virtual unsigned int GetCount();
    virtual void SetCount(unsigned int uiCount);

private:
	unsigned int 		m_uiPrice;
	static std::string  m_strName;
	static unsigned int m_uiCount;
};