#pragma once
#include "IPersonBuilder.h"

class CPersonDirector
{
public:
    CPersonDirector();
    ~CPersonDirector();

public:
    void CreatePerson(IPersonBuilder * person);
};