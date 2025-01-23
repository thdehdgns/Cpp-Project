#pragma once
#include <iostream>
using namespace std;
class Terran
{
protected:
	int attack;
	int defance;
	int health;
public:
	Terran();
	virtual void Stats();
};

