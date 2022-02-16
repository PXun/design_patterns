#include "CBananaFactory.h"
#include "CBanana.h"
#include <iostream>

CBananaFactory::CBananaFactory()
{
}

CBananaFactory::~CBananaFactory()
{
}

IFruits * CBananaFactory::CreateFruit()
{
    std::cout << "Create banana" << std::endl;
    return new CBanana;
}