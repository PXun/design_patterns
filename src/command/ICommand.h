#pragma once
#include <iostream>
#include "CChef.h"

class ICommand
{
public:
    virtual void ExecuteCmd() = 0;
};