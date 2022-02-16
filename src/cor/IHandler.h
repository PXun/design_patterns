#pragma once

class IHandler
{
public:
    virtual void Handler(int days) = 0;
    virtual IHandler * GetHandler() = 0;
    virtual void SetHandler(IHandler * handler) = 0;
};