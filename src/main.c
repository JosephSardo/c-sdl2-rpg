#include "game.h"

int main(void)
{
    if (!game_init())
        return 1;

    bool running = true;

    while (running) {
        game_handle_events(&running);
        game_update();
        game_render();
    }

    game_cleanup();
    return 0;
}
