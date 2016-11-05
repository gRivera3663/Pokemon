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
    string myDoodsName = "Charmander";
    Pokemon Char = make_pokemon(Element::Fire, myDoodsName);
    
    int myDoodsHealth = Char.get_hp();
    
    cout << "My " << myDoodsHealth << "'s health is " << myDoodsHealth << " ." << endl;
    
    return 0;
}

Pokemon make_pokemon(Element type, string name)
{
    Pokemon *creature;
    //creature->name = name; No, you can't define the name until you have an object.
    // All you have right now is a pointer. Name it below the creation (line 48).
	
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
