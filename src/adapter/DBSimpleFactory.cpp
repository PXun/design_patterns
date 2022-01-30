#include "DBSimpleFactory.h"

IDBHelper * DBSimpleFactory::GetDBObject(DB_TYPE emDBType)
    {
        IDBHelper *pDBHelper = nullptr;

        switch (emDBType)
        {
        case DB_MYSQL:
            pDBHelper = &m_mysql;
            break;
        case DB_SQLITE:
            pDBHelper = &m_sqlite;
            break;
        default:
            break;
        }

        return pDBHelper;
    }
