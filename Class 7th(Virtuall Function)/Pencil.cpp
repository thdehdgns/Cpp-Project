#include "Pencil.h"

Pencil::Pencil()
{
	thickness = 0.25f;
}

void Pencil::Draw()
{
	cout << "Pencil ÀÇ ±½±â: " << thickness << endl;
}

Pencil::~Pencil()
{
	cout << "Release Pencil" << endl;
	
}
