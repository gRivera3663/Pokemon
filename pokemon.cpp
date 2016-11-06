// pokemon.cpp

#include"pokemon.h"

using namespace std;

// put constructors here

Water::Water() : Pokemon(1)
{
    hp = hp + 2;
    attack = attack - 2;
    defense = defense + 2;
    specialAttack = specialAttack - 1;
    specialDefense = specialDefense + 4;
    speed = speed - 1;
}

Grass::Grass() : Pokemon(2)
{
    hp = hp - 3;
    attack = attack - 2;
    defense = defense + 0;
    specialAttack = specialAttack - 3;
    specialDefense = specialDefense + 0;
    speed = speed - 2;
}

Fire::Fire() : Pokemon(3)
{
    hp = hp + 1;
    attack = attack + 2;
    defense = defense - 2;
    specialAttack = specialAttack + 4;
    specialDefense = specialDefense - 2;
    speed = speed + 2;
}
