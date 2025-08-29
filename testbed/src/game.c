#include "game.h"

#include <core/logger.h>

b8 game_initialize(game* game_inst) {
    KDEBUG("game_initialize() called!");
    return true;
}

b8 game_update(game* game_init, f32 delta_time) {
    return true;
}

b8 game_render(game* game_init, f32 delta_time) {
    return true;
}

void game_on_resize(game* game_init, u32 width, u32 height) {
}