#pragma once
#include "ICompany.h"
#include <list>

class CHRDepartment : public ICompany
{
public:
    CHRDepartment(const std::string & name);
    ~CHRDepartment();

public:
    virtual void Add(ICompany * p);
    virtual void Remove(ICompany * p);
    virtual void Display(int depth);
    virtual void LineOfDuty();

private:
    std::string _name;
};