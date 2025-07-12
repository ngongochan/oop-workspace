#include "Player.h"

Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player*, int);

void Player::takeDamage(int) {
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

string Player::getName() {
    return name;
}

void Player::setName(string name) {
    this->name = name;
}


int Player::getHealth() {
    return health;
}

void Player::setHealth(int health) {
    this->health = health;
}


int Player::getDamage();
    return damage;

void Player::setDamage(int damage) {
    this->damage = damage;
}