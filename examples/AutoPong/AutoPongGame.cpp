#include <iostream>
#include <firefly/firefly.h>

class AutoPongGame : public Firefly::Game {
public:
    AutoPongGame()
    {
    }
};

int main(void) {
    AutoPongGame* game = new AutoPongGame();
}
