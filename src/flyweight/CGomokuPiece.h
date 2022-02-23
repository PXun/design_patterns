#pragma once
#include "IPiece.h"

class CGomokuPiece : public IPiece
{
public:
    CGomokuPiece(const std::string & color);
    ~CGomokuPiece();

public:
    virtual void SetX(int x);
    virtual void SetY(int y);
    virtual void Draw();

private:
    int _x = 0;
    int _y = 0;
    std::string _color;
};