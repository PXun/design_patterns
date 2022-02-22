#include "CFinanceDepartment.h"

CFinanceDepartment::CFinanceDepartment(const std::string & name)
: _name(name)
{
}

CFinanceDepartment::~CFinanceDepartment()
{
}

void CFinanceDepartment::Add(ICompany * p)
{
}

void CFinanceDepartment::Remove(ICompany * p)
{
}

void CFinanceDepartment::Display(int depth)
{
    std::string ss;
    for(int i = 0; i < depth; ++i)
    {
        ss += "-";
    }

    std::cout << ss << _name << std::endl;
}

void CFinanceDepartment::LineOfDuty()
{
    std::cout << _name << " 公司财务收支管理" << std::endl;
}