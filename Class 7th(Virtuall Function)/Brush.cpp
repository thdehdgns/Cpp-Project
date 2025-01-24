#include "Brush.h"

Brush::Brush()
{
	thickness = 1.0f;
}

void Brush::Draw()
{
	cout << "Brush ÀÇ ±½±â: " << thickness << endl;
}

Brush::~Brush()
{
	cout << "Release Brush" << endl;
}
