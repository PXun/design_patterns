#pragma once
#include "ICompany.h"
#include <list>

class CConcreteCompany : public ICompany
{
public:
    CConcreteCompany(const std::string & name);
    ~CConcreteCompany();

public:
    virtual void Add(ICompany * p);
    virtual void Remove(ICompany * p);
    virtual void Display(int depth);
    virtual void LineOfDuty();

private:
    std::string _name;
    std::list<ICompany *> _subsidiarys;
};