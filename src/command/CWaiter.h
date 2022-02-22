#pragma once
#include "ICommand.h"
#include <list>

class CWaiter
{
public:
    CWaiter();
    ~CWaiter();

public:
    void AddCmd(ICommand * cmd);
    void CancelCmd(ICommand * cmd);
    void Notify();

private:
    std::list<ICommand*> _commands;
};