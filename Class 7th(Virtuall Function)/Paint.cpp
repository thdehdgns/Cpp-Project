#include "Paint.h"

Paint::~Paint()
{
	cout << "Release Paint" << endl;
}

void Paint::Draw()
{
	cout << "�̸� �� ����: "<< thickness << endl;
}
