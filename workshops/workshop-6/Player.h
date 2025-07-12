#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    protected:
        string name;
        int health;
        int damage;
    public:
        Player(string, int, int);
        void attack(Player*, int);
        void takeDamage(int);
        string getName();
        void setName(string);
        int getHealth();
        void setHealth(int);
        int getDamage();
        void setDamage(int);

};

#endif PLAYER_H