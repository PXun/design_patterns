#include "SQLiteHelper.h"
#include <iostream>

void SQLiteHelper::Add()
{
    m_sqliteImpl.sqlite_add();
}

void SQLiteHelper::Delete()
{
    m_sqliteImpl.sqlite_delete();
}

void SQLiteHelper::Update()
{
    m_sqliteImpl.sqlite_update();
}

void SQLiteHelper::Query()
{
    m_sqliteImpl.sqlite_query();
}
