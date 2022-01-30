#include <iostream>
#include "../adapter/DBSimpleFactory.h"

int main(int, char**) 
{
    DBSimpleFactory db_factory;

    IDBHelper *pMySQL = db_factory.GetDBObject(DB_TYPE::DB_MYSQL);
    if(nullptr != pMySQL)
    {
        pMySQL->Add();
    }

    IDBHelper *pSQLite = db_factory.GetDBObject(DB_TYPE::DB_SQLITE);
    if(nullptr != pSQLite)
    {
        pSQLite->Add();
    }

    return 0;
}
