#ifndef GAME_H
#define GAME_H
#include <vector>
#include "Cell.h"
#include "Character.h"
#include "Utils.h"
#include "Trap.h"
#include <iostream>

class Game {
    private:
        std::vector<Cell*> grid;
        int gridWidth;
        int gridHeight;

    public:
        Game() {};

        std::vector<Cell*>& getGrid() {
            return grid;
        }

        void setGrid(std::vector<Cell*> g) {
            grid = g;
        }

        std::vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
            this->gridWidth = gridWidth;
            this->gridHeight = gridHeight;
            
            std::vector<Cell*> g {};

            std::tuple<int, int> pos;

            for(int i = 0; i < numCharacters; i++) {
                pos = Utils::generateRandomPos(gridWidth, gridHeight);
                g.push_back(new Character(std::get<0>(pos), std::get<1>(pos)));
            }

            for(int i = 0; i < numTraps; i++) {
                pos = Utils::generateRandomPos(gridWidth, gridHeight);
                g.push_back(new Trap(std::get<0>(pos), std::get<1>(pos)));
            }
            
            setGrid(g);
            
            return g;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold) {
            for(int i = 0; i < maxIterations; i++) {
                for(int i = 0; i < grid.size(); i++) {
                    Cell* g = grid[i];
                    if (g->getType() == 'C') {
                        Character* c = dynamic_cast<Character*>(g);
                        c->move(1, 0);
                        for (int i = 0; i < grid.size(); i++) {
                            Cell* g2 = grid[i];
                            if (g2->getType() == 'T') {
                                Trap* t = dynamic_cast<Trap*>(g2);
                                if (Utils::calculateDistance(c->getPos(), t->getPos())) {
                                    t->apply(*c);
                                }
                            }
                        }
                                    if (std::get<0>(c->getPos()) > gridWidth || std::get<1>(c->getPos()) > gridHeight) {
                                        std::cout << "Maximum number of iterations reached. Game over." << "\n" << "Character has won the game!";
                                        grid.clear();
                                        break;
                                    } else {
                                        std::cout << "Maximum number of iterations reached. Game over." << "\n" << "Character has won the game!";
                                        grid.clear();
                                        break;
                                    }
                    }
                }
            }
        }

        ~Game() {
            for (int i = 0; i < grid.size(); i++) {
                Cell* g = grid[i];
                delete g;
            } 
        }

};

#endif