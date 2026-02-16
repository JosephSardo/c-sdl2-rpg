#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <stdbool.h>

typedef struct{
    float x;
    float y;
    float speed;
} Player;

//Player functions
void player_init(void);
void player_update(const Uint8 *keystate);
void player_render(void);

//Game functions
bool game_init(void);
void game_handle_events(bool *running);
void game_update(void);
void game_render(void);
void game_cleanup(void);

#endif