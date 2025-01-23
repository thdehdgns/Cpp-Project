#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	defance = 1;
	attack = 20;
}


void SiegeTank::Stats()
{
	cout << "시즈탱크" << endl;
	cout << "공격력" << attack << endl;
	cout << "방어력" << defance << endl;
	cout << "체력" << health << endl;
}

