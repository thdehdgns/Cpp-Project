#include "Vector2.h"


Vector2::Vector2()
{
	cout << "Create Vector2" << endl;
	
}
Vector2::Vector2(int x, int y) : x(x), y(y)
{
	

}

Vector2 Vector2::operator+(const Vector2& clone) const
{
	return Vector2(x + clone.x, y + clone.y);
}

Vector2 Vector2::operator*(const Vector2& clone) const
{
	return Vector2(x * clone.x, y * clone.y);
}

Vector2 Vector2::operator/(const Vector2& clone) const
{
	return Vector2(x / clone.x, y / clone.y);
}

Vector2& Vector2::operator++()
{
	this->x++;
	this->y++;

	return *this;
}
Vector2& Vector2::operator--()
{
	this->x--;
	this->y--;

	return *this;
}

Vector2 Vector2::operator++(int)
{
	Vector2 clone(x,y);
	this->x++;
	this->y++;
	return clone;

}

Vector2 Vector2::operator--(int)
{
	Vector2 clone(x, y);
	this->x--;
	this->y--;
	return clone;

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
