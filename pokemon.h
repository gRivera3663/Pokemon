// pokemon.h

#ifndef pokemon_h
#define pokemon_h

#include<iostream>
#include<string>
using namespace std;

enum class Element {Fire = 1, Water = 2, Grass = 3};

class Pokemon
{
protected:
    string name;
    
    int level = 1;
    int hp = 20, hpMax = hp;
    int attack = 10, defense = 10, specialAttack = 10, specialDefense = 10, speed = 10;
    
public:
    Pokemon(int index){}
    void destructor() {}
    
    string get_name() {return name;}
    int get_level() {return level;}
    int get_hpMax() {return hpMax;}
    int get_hp() {return hp;}
    
    friend Pokemon make_pokemon(Element type, string name);
};

class Water: public Pokemon
{
public:
    Water();
};

class Grass: public Pokemon
{
public:
    Grass();
};

class Fire: public Pokemon
{
public:
    Fire();
};

#endif // pokemon.h
