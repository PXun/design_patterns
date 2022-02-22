#pragma once
#include "IOperationSystem.h"

class CWinodwsOS : public IOperationSystem
{
public:
    CWinodwsOS();
    ~CWinodwsOS();

public:
    virtual void Install();
};