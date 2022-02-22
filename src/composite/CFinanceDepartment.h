#pragma once
#include "ICompany.h"
#include <list>

class CFinanceDepartment : public ICompany
{
public:
    CFinanceDepartment(const std::string & name);
    ~CFinanceDepartment();

public:
    virtual void Add(ICompany * p);
    virtual void Remove(ICompany * p);
    virtual void Display(int depth);
    virtual void LineOfDuty();

private:
    std::string _name;
};