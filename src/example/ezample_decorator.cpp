#include <iostream>
#include "../decorator/beverage/MilkTea.h"
#include "../decorator/condiment/Pudding.h"

int main(int, char**) 
{
    MilkTea * pMilkTea = new MilkTea;
    Pudding * pudding_1 = new Pudding(pMilkTea);
    Pudding * pudding_2 = new Pudding(pudding_1);

    pudding_2->BeverageComplete();
    std::cout << "Total price: ￥" << pudding_2->GetPrice() << std::endl;

    delete pudding_2;
    delete pudding_1;
    delete pMilkTea;

    return 0;
}