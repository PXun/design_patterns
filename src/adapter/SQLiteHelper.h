#pragma once
#include "IDBHelper.h"
#include "ext_db_sdk/SQLiteImpl.h"

class SQLiteHelper : public IDBHelper
{
public:
    virtual void Add();

    virtual void Delete();

    virtual void Update();
    
    virtual void Query();

private:
    SQLiteImpl m_sqliteImpl;
};
