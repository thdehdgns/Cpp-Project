#pragma once
using namespace std;
#include <iostream>
class Character
{
private:
	weak_ptr<Character> weakpointer;

public:
	Character();
	void Parter(const weak_ptr<Character> & character);
	~Character();

};

