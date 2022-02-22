#pragma once
#include "ICommand.h"

class CBarbecueCmd : public ICommand
{
public:
    CBarbecueCmd(CChef * chef);
    ~CBarbecueCmd();

public:
    virtual void ExecuteCmd();

private:
    CChef * _chef;
};