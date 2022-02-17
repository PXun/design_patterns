#pragma once

class IGame
{
public:
    virtual void Initialize() = 0;
    virtual void StartPlay() = 0;
    virtual void StopPlay() = 0;

    void Play()
    {
        Initialize();
        StartPlay();
        StopPlay();
    }
};