#include <iostream>
#include "../prototype/CResume.h"

int main(int, char**) 
{
    CResume * a = new CResume("anyone");
    a->SetPersonalInfo("男", 18);
    a->SetWorkExperience("1970-01-01", "xxx公司");
    a->Display();
    std::cout << std::endl;

    std::cout << "Clone:" << std::endl;
    CResume * b = a->Clone();
    b->Display();
    std::cout << std::endl;

    std::cout << "Delete:" << std::endl;
    delete a;
    b->Display();
    std::cout << std::endl;

    std::cout << "Modify:" << std::endl;
    b->SetPersonalInfo("男", 19);
    b->SetWorkExperience("1971-01-01", "yyy公司");
    b->Display();
    std::cout << std::endl;

    delete b;

    return 0;
}
