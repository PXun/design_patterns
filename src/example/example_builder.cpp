#include <iostream>
#include "../builder/CPersonDirector.h"
#include "../builder/CThinPersonBuild.h"
#include "../builder/CFatPersonBuild.h"

int main(int, char**) 
{
    CPersonDirector director;
    IPersonBuilder * pThin = new CThinPersonBuild;
    IPersonBuilder * pFat = new CFatPersonBuild;

    std::cout << "Create thin person: " << std::endl;
    director.CreatePerson(pThin);

    std::cout << "Create fat person: " << std::endl;
    director.CreatePerson(pFat);

    delete pThin;
    delete pFat;

    return 0;
}
