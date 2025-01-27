#include "Vector2.h"


Vector2::Vector2()
{
	cout << "Create Vector2" << endl;
	
}
Vector2 Vector2::operator+(const Vector2& clone) const
{
	return Vector2(x + clone.x, y + clone.y);
}

void Vector2::Direction(int x, int y)
{
	this->x = x;
	this->y = y;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}


Vector2::~Vector2()
{
	cout << "Delete Vector2" << endl;


}
