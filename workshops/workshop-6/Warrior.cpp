#include "Player.h"
#include "Warrior.h"

Warrior::Warrior(string name, int health, int damage, string weapon) {
    this->name = name;
    this->health = health;
    this->damage = damage;
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* Wizard) {
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}