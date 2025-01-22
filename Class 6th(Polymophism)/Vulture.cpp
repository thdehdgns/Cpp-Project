#include "Vulture.h"

Vulture::Vulture()
{
	health = 80;
	attack = 20;
	defance = 0;
}

void Vulture::Stats()
{
	cout << "벌쳐" << endl;
	cout << "공격력" << attack << endl;
	cout << "방어력" << defance << endl;
	cout << "체력" << health << endl;
}
