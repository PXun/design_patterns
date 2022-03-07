#include <iostream>
#include "../visitor/CConcreteElementA.h"
#include "../visitor/CConcreteElementB.h"
#include "../visitor/CVisitConcreteElementA.h"
#include "../visitor/CVisitConcreteElementB.h"
#include "../visitor/CObjectStructure.h"

int main(int, char**) 
{
    CObjectStructure object;

    CConcreteElementA elementA;
    CConcreteElementB elementB;

    object.Attach(&elementA);
    object.Attach(&elementB);

    CVisitConcreteElementA visitorA;
    CVisitConcreteElementB visitorB;

    object.Accept(&visitorA);
    object.Accept(&visitorB);

    return 0;
}
