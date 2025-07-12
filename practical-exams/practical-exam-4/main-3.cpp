#include <iostream>
#include <tuple>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Character.h"
#include "Trap.h"
#include "Game.h"

int main() {
    Game* game = new Game;
    game->initGame(4, 5, 10, 10);
    game->gameLoop(4, 2.0);
}