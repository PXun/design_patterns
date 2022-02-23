#pragma once
#include "CGomokuPiece.h"
#include <map>

class CGomokuPieceFactory
{
public:
    CGomokuPieceFactory();
    ~CGomokuPieceFactory();

public:
    CGomokuPiece * GetGomokuPiece(const std::string & color);
    int GetGomokuPieceCount();

private:
    std::map<std::string, CGomokuPiece *> _gomokuPieceMap;
};