#include <iostream>
#include "../memento/CGameRole.h"
#include "../memento/CRoleStateCaretaker.h"

int main(int, char**) 
{
    CRoleStateCaretaker * caretaker = new CRoleStateCaretaker();
    CGameRole * role = new CGameRole(100, caretaker);

    std::cout << "--------------------------------" << std::endl;
    std::cout << "initial value" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    role->ShowState();
    role->SaveState("initial");

    std::cout << "--------------------------------" << std::endl;
    std::cout << "after first fight" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    role->Fight();
    role->ShowState();
    role->SaveState("first");

    std::cout << "--------------------------------" << std::endl;
    std::cout << "after second fight" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    role->Fight();
    role->ShowState();
    role->SaveState("second");

    std::cout << "--------------------------------" << std::endl;
    std::cout << "initial state" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    role->RecoverState("initial");
    role->ShowState();

    std::cout << "--------------------------------" << std::endl;
    std::cout << "after first fight state" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    role->RecoverState("first");
    role->ShowState();

    std::cout << "--------------------------------" << std::endl;
    std::cout << "after second fight state" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    role->RecoverState("second");
    role->ShowState();
    
    delete role;
    delete caretaker;

    return 0;
}
