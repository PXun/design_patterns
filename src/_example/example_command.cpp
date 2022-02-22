#include <iostream>
#include "../command/CCookingCmd.h"
#include "../command/CBarbecueCmd.h"
#include "../command/CWaiter.h"

int main(int, char**) 
{
    CChef * chef1 = new CChef("chef qian");
    CChef * chef2 = new CChef("chef zhang");
    
    CCookingCmd * cooking1 = new CCookingCmd(chef1);
    CBarbecueCmd * barbecue1 = new CBarbecueCmd(chef2);

    std::cout << "----------------------------" << std::endl;
    CWaiter waiter1;
    waiter1.AddCmd(cooking1);
    waiter1.AddCmd(barbecue1);
    waiter1.Notify();

    CCookingCmd * cooking2 = new CCookingCmd(chef1);
    CBarbecueCmd * barbecue2 = new CBarbecueCmd(chef2);

    std::cout << "----------------------------" << std::endl;
    CWaiter waiter2;
    waiter2.AddCmd(cooking2);
    waiter2.AddCmd(barbecue2);
    waiter2.CancelCmd(cooking2);
    waiter2.Notify();

    delete chef2;
    delete chef1;

    return 0;
}
