#include "Vulture.h"

Vulture::Vulture()
{
	health = 80;
	attack = 20;
	defance = 0;
}

void Vulture::Stats()
{
	cout << "����" << endl;
	cout << "���ݷ�" << attack << endl;
	cout << "����" << defance << endl;
	cout << "ü��" << health << endl;
}
