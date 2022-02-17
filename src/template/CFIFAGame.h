#pragma once
#include "IGame.h"

class CFIFAGame : public IGame
{
public:
    CFIFAGame();
    ~CFIFAGame();

public:
    virtual void Initialize();
    virtual void StartPlay();
    virtual void StopPlay();
};