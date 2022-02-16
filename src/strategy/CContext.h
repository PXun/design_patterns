#pragma once
#include <string>
#include "IAlgorithm.h"

class CContext
{
public:
    CContext(const std::string & strAlgorithm);
    ~CContext();

public:
    int GetResult(int m, int n);

private:
    IAlgorithm * m_pAlgorithm = nullptr;
};