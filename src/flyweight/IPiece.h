#pragma once
#include <iostream>

class IPiece
{
public:
    virtual void SetX(int x) = 0;
    virtual void SetY(int y) = 0;
    virtual void Draw() = 0;
};