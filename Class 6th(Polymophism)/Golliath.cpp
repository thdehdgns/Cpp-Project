#include "Golliath.h"

Golliath::Golliath()
{
	health = 125;
	attack = 12;
	defance = 1;
}

void Golliath::Stats()
{
	cout << "�񸮾�" << endl;
	cout << "���ݷ� ����" << attack << endl;
	cout << "���ݷ� ����" << attack +8 << endl;
	cout << "����" << defance << endl;
	cout << "ü��" << health << endl;
}
