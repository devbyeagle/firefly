#pragma once

#include "firefly/content/ContentProvider.h"
#include "firefly/game/GameWindow.h"

namespace Firefly 
{
    class Game
    {
    private:
        std::shared_ptr<ContentProvider> _content;
    public:
        Game();

        ~Game();

        ContentProvider& Content = *_content;
    };
}
