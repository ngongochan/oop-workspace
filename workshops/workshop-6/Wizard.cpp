#include "Player.h"
#include "Wizard.h"

Wizard::Wizard(string name, int health, int damage, int mana) {
    this->name = name;
    this->health = health;
    this->damage = damage;
    this->mana = mana;
}

void castSpell(Player* Warrior) {
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}