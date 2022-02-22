#pragma once
#include <iostream>

template<typename T>
class TSingleton
{
public:
    TSingleton(const TSingleton &) = delete;
    TSingleton& operator=(const TSingleton &) = delete;
    ~TSingleton()
    {
        std::cout << "TSingleton::~TSingleton()" << std::endl;
    }

public:
    static T & GetInstance()
    {
        static T instance;
        return instance;
    }

protected:
    TSingleton()
    {
        std::cout << "TSingleton::TSingleton()" << std::endl;
    }
};