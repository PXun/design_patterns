#include <iostream>
#include "../composite/CConcreteCompany.h"
#include "../composite/CHRDepartment.h"
#include "../composite/CFinanceDepartment.h"

int main(int, char**) 
{
    CConcreteCompany * rootCompany = new CConcreteCompany("北京总公司");
    rootCompany->Add(new CHRDepartment("北京总公司人力资源部"));
    rootCompany->Add(new CFinanceDepartment("北京总公司财务部"));

    CConcreteCompany * comp = new CConcreteCompany("上海分公司");
    comp->Add(new CHRDepartment("上海分公司人力资源部"));
    comp->Add(new CFinanceDepartment("上海分公司财务部"));
    rootCompany->Add(comp);

    CConcreteCompany * comp1 = new CConcreteCompany("广州分公司");
    comp1->Add(new CHRDepartment("广州分公司人力资源部"));
    comp1->Add(new CFinanceDepartment("广州分公司财务部"));
    rootCompany->Add(comp1);

    CConcreteCompany * comp2 = new CConcreteCompany("深圳分公司");
    comp2->Add(new CHRDepartment("深圳分公司人力资源部"));
    comp2->Add(new CFinanceDepartment("深圳分公司财务部"));
    rootCompany->Add(comp2);

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "结构图：" << std::endl;
    rootCompany->Display(0);

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "职责：" << std::endl;
    rootCompany->LineOfDuty();

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "删除广州分公司" << std::endl;
    rootCompany->Remove(comp1);

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "结构图：" << std::endl;
    rootCompany->Display(0);

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "职责：" << std::endl;
    rootCompany->LineOfDuty();

    delete rootCompany;

    return 0;
}
