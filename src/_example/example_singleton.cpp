#include <iostream>
#include "../singleton/CTest.h"

int main(int, char**) 
{
    CTest & test1 = CTest::GetInstance();
    CTest & test2 = CTest::GetInstance();
    
    std::cout << "test1 = " << &test1 << std::endl;
    std::cout << "test2 = " << &test2 << std::endl;

    return 0;
}
