#pragma once
#include "TSingleton.h"

class CTest : public TSingleton<CTest>
{
friend class TSingleton<CTest>;

public:
    CTest(const CTest &) = delete;
    CTest & operator=(const CTest &) = delete;
    ~CTest();

public:
    void func() const;

private:
    CTest();
};