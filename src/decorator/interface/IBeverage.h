#pragma once
#include <iostream>
#include <string>

class IBeverage  
{
public:
	virtual std::string GetName() = 0;
	virtual unsigned int GetPrice() = 0;
	virtual void SetPrice(unsigned int uiPrice) = 0;
	virtual void BeverageComplete() = 0;
};