// pokemon.h
#ifndef pokemon_h
#define pokemon_h

#include"pokemon.cpp"

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
    void constructor(int index){}
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
    void water_stats()
    {
        hp = hp + 2;
        attack = attack - 2;
        defense = defense + 2;
        specialAttack = specialAttack - 1;
        specialDefense = specialDefense + 4;
        speed = speed - 1;
    }
};

class Grass: public Pokemon
{
public:
    void grass_stats()
    {
        hp = hp - 3;
        attack = attack - 2;
        defense = defense + 0;
        specialAttack = specialAttack - 3;
        specialDefense = specialDefense + 0;
        speed = speed - 2;
    }
};

class Fire: public Pokemon
{
public:
    void fire_stats()
    {
        hp = hp + 1;
        attack = attack + 2;
        defense = defense - 2;
        specialAttack = specialAttack + 4;
        specialDefense = specialDefense - 2;
        speed = speed + 2;
    }
};

Pokemon make_pokemon(Element type, string name)
{
    Pokemon *creature;
    creature->name = name;
    
    if (type == Element::Fire)
    {
        *creature = *new Fire;
        creature->constructor(1);
        static_cast<Fire*>(creature)->fire_stats();
    }
    else if (type == Element::Water)
    {
        *creature = *new Water;
        creature->constructor(2);
        static_cast<Water*>(creature)->water_stats();
    }
    else if (type == Element::Grass)
    {
        *creature = *new Grass;
        creature->constructor(3);
        static_cast<Grass*>(creature)->grass_stats();
    }
    return *creature;
}

#endif // pokemon.h
