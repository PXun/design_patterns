#pragma once
#include <iostream>

class CResume
{
public:
    CResume(const CResume &rs);
    CResume(const char * pszName);
    ~CResume();

public:
    CResume * Clone();
    void Display();
    void SetPersonalInfo(const std::string & strGender, int age);
    void SetWorkExperience(const std::string & strTimeArea, const std::string & strExperience);

private:
    int m_age = 0;
    char * m_pszName;
    std::string m_strGender;
    std::string m_strTimeArea;
    std::string m_strExperience;
};