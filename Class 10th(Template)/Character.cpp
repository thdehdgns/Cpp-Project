#include "Character.h"

Character::Character()
{
	cout << "created Character" << endl;
}

void Character::Parter(const weak_ptr<Character>& character)
{
	weakpointer = character;
}

Character::~Character()
{
	cout << "destory Character" << endl;

}
