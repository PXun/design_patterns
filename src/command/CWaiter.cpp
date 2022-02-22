#include "CWaiter.h"

CWaiter::CWaiter()
{
}

CWaiter::~CWaiter()
{
    for(auto it = _commands.begin(); it != _commands.end(); ++it)
    {
        if(nullptr != *it)
        delete *it;
        *it = nullptr;
    }
}

void CWaiter::AddCmd(ICommand * command)
{
    _commands.push_back(command);
}

void CWaiter::CancelCmd(ICommand * command)
{
    _commands.remove(command);

    if(nullptr != command)
    {
        delete command;
        command = nullptr;
    }
}

void CWaiter::Notify()
{
    for(auto it : _commands)
    {
        it->ExecuteCmd();
    }
}

