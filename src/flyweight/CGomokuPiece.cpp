#include "CGomokuPiece.h"
#include <iomanip>

CGomokuPiece::CGomokuPiece(const std::string & color)
: _color(color)
{
}

CGomokuPiece::~CGomokuPiece()
{
}

void CGomokuPiece::SetX(int x)
{
    _x = x;
}

void CGomokuPiece::SetY(int y)
{
    _y = y;
}

void CGomokuPiece::Draw()
{\
    std::cout << "Drawing: [x = " << std::left << std::setw(2) << _x << ", y = " << std::left << std::setw(2) << _y << ", color = " << _color << "]" << std::endl;
}