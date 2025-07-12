#ifndef GAME_H
#define GAME_H
#include <vector>
#include "GameEntity.h"
#include "Ship.h"
#include "Utils.h"
#include "Mine.h"

class Game {
  private:
    std::vector<GameEntity *> entities;

  public:
    ~Game() {
        for (int i = 0; i < entities.size(); i++) {
            GameEntity *e = entities[i];
            delete e; 
        }
    }

    std::vector<GameEntity *> get_entities() {
        return entities;
    }

    void set_entities(std::vector<GameEntity *> e) {
        entities = e;
    }

    std::vector<GameEntity *> initGame(int numShips, int numMines,
                                       int gridWidth, int gridHeight) {
        std::vector<GameEntity *> e {};
        std::tuple<int, int> pos;
        for (int i = 0; i < numShips; i++) {
            pos = Utils::generateRandomPos(gridWidth, gridHeight);
            e.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i < numMines; i++) {
            pos = Utils::generateRandomPos(gridWidth, gridHeight);
            e.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }
        set_entities(e);
        return e;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int i = 0; i < maxIterations; i++) {
            for (int i = 0; i < entities.size(); i++) {
                GameEntity *e = entities[i];
                if (e->getType() == 'S') {
                    Ship *s = dynamic_cast<Ship *>(e);
                    s->move(1, 0);
                    for (int i = 0; i < entities.size(); i++) {
                        GameEntity *e2 = entities[i];
                        if (e2->getType() == 'M') {
                            Mine *m = dynamic_cast<Mine *>(e2);
                            if (Utils::calculateDistance(m->getPos(),
                                                         s->getPos())) {
                                m->explode().apply(*s);
                            }
                        }
                    }
                }
            }
        }
    }
};

#endif