#include "Pencil.h"

Pencil::Pencil()
{
	thickness = 0.25f;
}

void Pencil::Draw()
{
	cout << "Pencil �� ����: " << thickness << endl;
}

Pencil::~Pencil()
{
	cout << "Release Pencil" << endl;
	
}
