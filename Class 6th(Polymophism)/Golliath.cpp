#include "Golliath.h"

Golliath::Golliath()
{
	health = 125;
	attack = 12;
	defance = 1;
}

void Golliath::Stats()
{
	cout << "골리앗" << endl;
	cout << "공격력 지상" << attack << endl;
	cout << "공격력 공중" << attack +8 << endl;
	cout << "방어력" << defance << endl;
	cout << "체력" << health << endl;
}
