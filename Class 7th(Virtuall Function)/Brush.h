#pragma once
#include "Paint.h"
class Brush : public Paint
{
public:
	Brush();
	void Draw()override;

	~Brush()override;
};

