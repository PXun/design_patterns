#include "CResume.h"
#include <cstdio>
#include <cstring>

CResume::CResume(const CResume &rs)
{
    std::cout << "call Copy-Construction" << std::endl;
    m_pszName = new char[strlen(rs.m_pszName) + 1];
    strcpy(m_pszName, rs.m_pszName);

    m_age = rs.m_age;
    m_strGender = rs.m_strGender;
    m_strTimeArea = rs.m_strTimeArea;
    m_strExperience = rs.m_strExperience;
}

CResume::CResume(const char * pszName)
{
    if(NULL == pszName)
    {
        m_pszName = new char[1];
        m_pszName[0] = '\0';
    }
    else
    {
        m_pszName = new char[strlen(pszName) + 1];
        strcpy(m_pszName, pszName);
    }
}

CResume::~CResume()
{
    delete [] m_pszName;
}

CResume * CResume::Clone()
{
    return new CResume(*this);
}

void CResume::Display()
{
    std::cout << m_pszName << " " << m_strGender << " " << m_age << std::endl;
    std::cout << "工作经历 " << m_strTimeArea << " " << m_strExperience << std::endl;
}

void CResume::SetPersonalInfo(const std::string & strGender, int age)
{
    m_strGender = strGender;
    m_age = age;
}

void CResume::SetWorkExperience(const std::string & strTimeArea, const std::string & strExperience)
{
    m_strTimeArea = strTimeArea;
    m_strExperience = strExperience;
}