#pragma once
#include <iostream>
using namespace std;

class Vector2
{
private:
	int x = 0;
	int y = 0;
public:
	Vector2 operator + (const Vector2& clone) const;
	
	Vector2();
	void Direction(int x, int y);

	const int& X() {
		return x;
	}
	const int& Y() {
		return y;
	}
	~Vector2();
};

