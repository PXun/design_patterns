#pragma once
#include "IAlgorithm.h"

class CSubtraction : public IAlgorithm
{
public:
    CSubtraction();
    ~CSubtraction();

public:
    virtual int GetResult(int m, int n);
};