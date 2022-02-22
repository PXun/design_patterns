#include "CConcreteCompany.h"

CConcreteCompany::CConcreteCompany(const std::string & name)
: _name(name)
{
}

CConcreteCompany::~CConcreteCompany()
{
    for(auto it = _subsidiarys.begin(); it != _subsidiarys.end(); ++it)
    {
        if(nullptr != *it)
        delete *it;
        *it = nullptr;
    }
}

void CConcreteCompany::Add(ICompany * p)
{
    _subsidiarys.push_back(p);
}

void CConcreteCompany::Remove(ICompany * p)
{
    _subsidiarys.remove(p);

    if(nullptr != p)
    {
        delete p;
        p = nullptr;
    }
}

void CConcreteCompany::Display(int depth)
{
    std::string ss;
    for(int i = 0; i < depth; ++i)
    {
        ss += "-";
    }

    std::cout << ss << _name << std::endl;

    for(auto it : _subsidiarys)
    {
        it->Display(depth + 2);
    }
}

void CConcreteCompany::LineOfDuty()
{
    for(auto it : _subsidiarys)
    {
        it->LineOfDuty();
    }
}