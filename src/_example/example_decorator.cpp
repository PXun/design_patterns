#include <iostream>
#include "../decorator/beverage/MilkTea.h"
#include "../decorator/condiment/Pudding.h"
#include "../decorator/condiment/Cocoa.h"

int main(int, char**) 
{
    MilkTea * pMilkTeaPudding = new MilkTea;
    Pudding * pudding = new Pudding(pMilkTeaPudding);
    pudding->BeverageComplete();
    std::cout << "Total price: ￥" << pudding->GetPrice() << std::endl;

    MilkTea * pMilkTeaCocoa = new MilkTea;
    Cocoa * cocoa = new Cocoa(pMilkTeaCocoa);
    cocoa->BeverageComplete();
    std::cout << "Total price: ￥" << cocoa->GetPrice() << std::endl;

    MilkTea * pMilkTeaMix = new MilkTea;
    Cocoa * cocoa_1 = new Cocoa(pMilkTeaMix);
    Pudding * pudding_1 = new Pudding(cocoa_1);
    pudding_1->BeverageComplete();
    std::cout << "Total price: ￥" << pudding_1->GetPrice() << std::endl;

    return 0;
}