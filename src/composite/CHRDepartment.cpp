#include "CHRDepartment.h"

CHRDepartment::CHRDepartment(const std::string & name)
: _name(name)
{
}

CHRDepartment::~CHRDepartment()
{
}

void CHRDepartment::Add(ICompany * p)
{
}

void CHRDepartment::Remove(ICompany * p)
{
}

void CHRDepartment::Display(int depth)
{
    std::string ss;
    for(int i = 0; i < depth; ++i)
    {
        ss += "-";
    }

    std::cout << ss << _name << std::endl;
}

void CHRDepartment::LineOfDuty()
{
    std::cout << _name << " 员工招聘培训管理" << std::endl;
}