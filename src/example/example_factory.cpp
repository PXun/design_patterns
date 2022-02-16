#include <iostream>
#include "../factory/IFruits.h"
#include "../factory/CAppleFactory.h"
#include "../factory/CBananaFactory.h"

int main(int, char**) 
{
    IFruitsFactory * pAppleFactory = new CAppleFactory();
    IFruits * pApple = pAppleFactory->CreateFruit();

    pApple->ShowName();

    delete pApple;
    delete pAppleFactory;

    IFruitsFactory * pBananaFactory = new CBananaFactory();
    IFruits * pBanana = pBananaFactory->CreateFruit();

    pBanana->ShowName();

    delete pBanana;
    delete pBananaFactory;

    return 0;
}
