#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	defance = 1;
	
}

void SiegeTank::Attack(bool ground)
{
	if (ground == true)
	{
		attack = 70;
		cout << "시즈모드" << endl;
	}
	else
	{
		attack = 30;
		cout << "탱크모드" << endl;

	}
}
void SiegeTank::Stats(bool ground)
{
	cout << "시즈탱크" << endl;
	Attack(ground);
	cout << "공격력" << attack << endl;
	cout << "방어력" << defance << endl;
	cout << "체력" << health << endl;
}

