#include "pokemon.h"

std::ostream& operator<< (std::ostream &out, Pokemon &pokemon)
{
	out << "<Pokemon>" << std::endl
	<< " <id> " << pokemon.id << " </id>" << std::endl
	<< " <name> " << pokemon.userEntry.name << " </name> " << std::endl
	<< " <attack> " << pokemon.attack << " </attack> " << std::endl
        << " <defense> " << pokemon.defense << " </defense> " << std::endl
        << " <entry> " << std::endl
        << "  <number> " << pokemon.userEntry.number << " </number> " << std::endl
        << "  <name> " << pokemon.name << " </name> " << std::endl
        << " </entry> " << std::endl
        << "</pokemon> ";

	return out;

}

void Pokemon::write()
{
	ifstream file;
	string fileName = Pokemon.id;
	
}

Fire::Fire(int index) : Pokemon(index){
	maxHP+=1; speed+=2;
	attack+=2; defense-=2;
	specialAttack+=4; specialDefense+=1;
}

Water::Water(int index) : Pokemon(index){
	maxHP+=2; speed-=1;
	attack-=2; defense+=2;
	specialAttack-=4; specialDefense-=1;
}

Grass::Grass(int index) : Pokemon(index){
	maxHP-=3; speed-=2;
	attack-=2; defense+=0;
	specialAttack-=3; specialDefense+=0;
}

Pokemon *make_pokemon(element e, std::string n) {

	Pokemon *newPokemon;
	if(e == element::fire) {
		newPokemon = new Fire(1);
		newPokemon->name = n;
	} else if(e == element::grass) {
		newPokemon = new Grass(1);
		newPokemon->name = n;
	} else if(e == element::water) {
		newPokemon = new Water(1);
		newPokemon->name = n;
	}
	return newPokemon;

}
