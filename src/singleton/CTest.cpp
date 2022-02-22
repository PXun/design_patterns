#include "CTest.h"
#include <iostream>

CTest::CTest()
{
    std::cout << "CTest::CTest()" << std::endl;
}

CTest::~CTest()
{
    std::cout << "CTest::~CTest()" << std::endl;
}

void CTest::func() const
{
    std::cout << "CTest::func()" << std::endl;
}