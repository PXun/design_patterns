#include <iostream>
#include "../cor/CGroupLeaderHandler.h"
#include "../cor/CProjectManagerHandler.h"
#include "../cor/CDepartmentManagerHandler.h"

int main(int, char**) 
{
    CGroupLeaderHandler *pGroupLeader = new CGroupLeaderHandler;
    CProjectManagerHandler *pProjectManager = new CProjectManagerHandler;
    CDepartmentManagerHandler *pDepartmentManager = new CDepartmentManagerHandler;

    pGroupLeader->SetHandler(pProjectManager);
    pProjectManager->SetHandler(pDepartmentManager);

    std::cout << "请假一天：" << std::endl;
    pGroupLeader->Handler(1);
    std::cout << "请假三天：" << std::endl;
    pGroupLeader->Handler(3);
    std::cout << "请假五天：" << std::endl;
    pGroupLeader->Handler(5);

    delete pDepartmentManager;
    delete pProjectManager;
    delete pGroupLeader;

    return 0;
}
