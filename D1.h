#pragma once
#include "B1.h"
#include "B2.h"


class D1 : public B1, private B2
{
private:
	int d1;

public:
	D1(int d1, int b1, int b2);
	void show_D1();
};