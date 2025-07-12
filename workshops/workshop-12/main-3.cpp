#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Game.h"

int main() {
    Game game;
    game.initGame(4, 5, 10, 10);
    game.gameLoop(4, 2.0);
}