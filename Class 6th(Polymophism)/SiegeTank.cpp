#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	defance = 1;
	attack = 20;
}


void SiegeTank::Stats()
{
	cout << "������ũ" << endl;
	cout << "���ݷ�" << attack << endl;
	cout << "����" << defance << endl;
	cout << "ü��" << health << endl;
}

