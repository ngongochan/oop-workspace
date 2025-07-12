// Data Members:
//     std::tuple<int, int> position (representing the position of the entity)
//     char type (representing the type of the entity)
// Member Functions:
//     Constructor GameEntity(int x, int y, char type)
//     std::tuple<int, int> getPos(): Returns the position of the entity.
//     char getType(): Returns the type of the entity.

#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class GameEntity {
    protected:
        std::tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type) {
            // std::make_tuple(x, y);
            this->position = std::make_tuple(x, y);
            this->type = type;
        }

        void setPos(int x, int y) {
            this->position = std::make_tuple(x, y);
        }

        void setType(char type) {
            this->type = type;
        }        

        std::tuple<int, int> getPos() {
            return position;
        }

        char getType() {
            return type;
        }

        virtual ~GameEntity() {}
};

#endif