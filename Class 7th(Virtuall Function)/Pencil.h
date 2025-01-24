#pragma once
#include "Paint.h"
class Pencil : public Paint
{
	public:
		Pencil();
		void Draw()override;
		~Pencil()override;
};

