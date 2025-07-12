#ifndef TRAP_H
#define TRAP_H
#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect {
    private:
        bool active = true;
    public:
        Trap(int x, int y) : Cell(x, y, 'T')  {
        }

        bool isActive() {
            return active;
        }

        void apply(Cell& cell) {
            cell.setType('T');
            this->active = false;
        }
};

#endif