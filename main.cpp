/*
 -----------------------
 Gabriel Rivera
 Email: GabrielRivera457@gmail.com
 Homework 6
 October 24, 2016
 -----------------------
*/

#include<iostream>
#include<string>
#include"pokemon.h"

using namespace std;

Pokemon make_pokemon(Element type, string name);

int main(void)
{
    string pokeName = "Charmander";
    Pokemon Char = make_pokemon(Element::Fire, pokeName);
    
    int pokeHealth = Char.get_hp();
    
    cout << "My " << pokeName << "'s health is " << pokeHealth << " ." << endl;
    
    return 0;
}

Pokemon make_pokemon(Element type, string name)
{
    Pokemon *creature;
    
    if (type == Element::Fire)
    {
        *creature = *new Fire;
    }
    else if (type == Element::Water)
    {
        *creature = *new Water;
    }
    else if (type == Element::Grass)
    {
        *creature = *new Grass;
    }
    
    creature->name = name;
    
    return *creature;
}
