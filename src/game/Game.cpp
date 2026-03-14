#include "firefly/game/Game.h"

namespace Firefly 
{
    Game::Game()
    {
        _content = std::make_shared<ContentProvider>();
    }

    Game::~Game()
    {
    }
}
