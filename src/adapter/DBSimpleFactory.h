#pragma once
#include "MySQLHelper.h"
#include "SQLiteHelper.h"

enum DB_TYPE
{
    DB_MYSQL,
    DB_SQLITE
};

class DBSimpleFactory
{
public:
    IDBHelper *GetDBObject(DB_TYPE emDBType);

private:
    MySQLHelper m_mysql;
    SQLiteHelper m_sqlite;
};
