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
		cout << "������" << endl;
	}
	else
	{
		attack = 30;
		cout << "��ũ���" << endl;

	}
}
void SiegeTank::Stats(bool ground)
{
	cout << "������ũ" << endl;
	Attack(ground);
	cout << "���ݷ�" << attack << endl;
	cout << "����" << defance << endl;
	cout << "ü��" << health << endl;
}

