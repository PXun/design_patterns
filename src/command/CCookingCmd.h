#pragma once
#include "ICommand.h"

class CCookingCmd : public ICommand
{
public:
    CCookingCmd(CChef * chef);
    ~CCookingCmd();

public:
    virtual void ExecuteCmd();

private:
    CChef * _chef;
};