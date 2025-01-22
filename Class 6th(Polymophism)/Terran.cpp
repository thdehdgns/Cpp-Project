#include "Terran.h"

Terran::Terran()
{
	attack = 0;
	defance = 0;
	health = 0;
}

void Terran::Stats()
{
	cout << "이름" << endl;
	cout << "공격력" << attack <<endl;
	cout << "방어력" << defance << endl;
	cout << "체력" << health << endl;

}
