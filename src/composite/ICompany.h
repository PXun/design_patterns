#pragma once
#include <iostream>

class ICompany
{
public:
    virtual void Add(ICompany * p) = 0;
    virtual void Remove(ICompany * p) = 0;
    virtual void Display(int depth) = 0;
    virtual void LineOfDuty() = 0;
};