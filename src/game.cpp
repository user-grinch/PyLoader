#include "pch.h"
#include "game.h"

size_t Game::getAddr(size_t iii, size_t vc, size_t sa)
{
    return (gGameVer == eGame::III) ? iii : ((gGameVer == eGame::VC) ? vc : sa);
}