// Member Functions:
//     virtual void apply(GameEntity& entity):
//     Accepts a GameEntity object as input and applies the effect to the entity.
//     This function is pure virtual and needs to be implemented in derived classes.

#ifndef EFFECT_H
#define EFFECT_H

class Effect {
    protected:
        GameEntity* entity;
    public:
    // DO NOT add const to pure virtual functions
    // otherwise we can't override them in the base classes
        virtual void apply(GameEntity& entity) = 0;
};

#endif