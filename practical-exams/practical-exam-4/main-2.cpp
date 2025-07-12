#include <iostream>
#include <tuple>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Character.h"
#include "Trap.h"

int main() {
    Character Character1(6, 4);
    Trap Trap1(5, 5);
    Character1.move(1, 2);
}