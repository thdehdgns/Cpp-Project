#include "Paint.h"

Paint::~Paint()
{
	cout << "Release Paint" << endl;
}

void Paint::Draw()
{
	cout << "ÀÌ¸§ ÀÇ ±½±â: "<< thickness << endl;
}
