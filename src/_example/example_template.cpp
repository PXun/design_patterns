#include <iostream>
#include "../template/CNBAGame.h"
#include "../template/CFIFAGame.h"

int main(int, char**) 
{
    IGame * fifa = new CFIFAGame;
    fifa->Play();

    IGame * nba = new CNBAGame;
    nba->Play();

    delete fifa;
    delete nba;

    return 0;
}

// 定义一个操作中的算法的骨架，而将一些步骤延迟到子类中。模板方法使得子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤。