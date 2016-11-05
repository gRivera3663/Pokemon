// pokemon.cpp

#include"pokemon.h"
#include<iostream>
#include<string>

using namespace std;

enum class Element;

class Pokemon;
class Fire;
class Water;
class Grass;

Pokemon make_pokemon(Element type, string name);
