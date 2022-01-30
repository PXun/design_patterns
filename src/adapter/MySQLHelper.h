#pragma once
#include "IDBHelper.h"

class MySQLHelper : public IDBHelper
{
public:
    virtual void Add();

    virtual void Delete();

    virtual void Update();
    
    virtual void Query();
};
