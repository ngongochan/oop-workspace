#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    Ship Ship1(6, 4);
    Mine Mine1(5, 5);
    Explosion Explosion1(1, 10);
    Ship1.move(1, 2);

    // GameEntity* S1 = (GameEntity*)(&Ship1);
    
    // Derived d1;
    // // Implicit cast allowed
    // Base* b1 = (Base*)(&d1);
    // // upcasting using static_cast
    // Base* b2 = static_cast<Base*>(&d1);

    Explosion1.apply(Ship1);
}