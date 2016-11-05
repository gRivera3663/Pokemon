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

int main(void)
{
    string myDoodsName = "Charmander";
    Pokemon Char = make_pokemon(Element::Fire, myDoodsName);
    
    int myDoodsHealth = Char.get_hp();
    
    cout << "My " << myDoodsHealth << "'s health is " << myDoodsHealth << " ." << endl;
    
    return 0;
}
