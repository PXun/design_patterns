#pragma once
#include "IAlgorithm.h"

class CAddition : public IAlgorithm
{
public:
    CAddition();
    ~CAddition();

public:
    virtual int GetResult(int m, int n);
};