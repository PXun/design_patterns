#pragma once
#include <iostream>

class CChef
{
public:
    CChef(const std::string & name);
    ~CChef();

public:
    void Cooking();
    void Barbecue();

private:
    std::string _name;
};