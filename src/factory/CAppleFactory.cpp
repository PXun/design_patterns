#include "CAppleFactory.h"
#include "CApple.h"
#include <iostream>

CAppleFactory::CAppleFactory()
{
}

CAppleFactory::~CAppleFactory()
{
}

IFruits * CAppleFactory::CreateFruit()
{
    std::cout << "Create apple" << std::endl;
    return new CApple;
}