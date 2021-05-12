#pragma once
#include "D1.h"

class D2 : private D1
{
private:
	int d2;

public:
	D2(int d1, int d2, int b1, int b2);
	void show_D2();
};
