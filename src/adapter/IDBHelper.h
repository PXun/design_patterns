#pragma once

class IDBHelper
{
public:
    virtual void Add() = 0;

    virtual void Delete() = 0;

    virtual void Update() = 0;
    
    virtual void Query() = 0;
};
