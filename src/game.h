#pragma once 

class Game
{
public: 
    Game() = delete;
    Game(const Game&&) = delete;

    static size_t getAddr(size_t iii = 0, size_t vc = 0, size_t sa = 0);
};