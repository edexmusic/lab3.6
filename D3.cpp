#include "D3.h"

D3::D3(int x, int y, int z, int m, int j)
	: D2(x, y, z, j)
{
	d3 = m;
}

void D3::show_D3()
{
	cout << "class D3:" << endl;
	show_D2();

	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}
