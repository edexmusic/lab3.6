#include "D3.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B1 o1(777);
	cout << "B1 o1(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Ієрархія класу B1: " << endl;
	o1.show_B1();

	B2 o2(888);
	cout << "B2 o2(888);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Ієрархія класу B2: " << endl;
	o2.show_B2();


	D1 n1(1000, 2000, 3000);
	cout << "D1 n1(1000, 2000, 3000);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Ієрархія класу D1: " << endl;
	n1.show_D1();


	D2 n2(10, 20, 30, 40);
	cout << "D2 n2(10, 20, 30, 40);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D2: " << endl;
	n2.show_D2();

	D3 n3(1, 2, 3, 4, 5);
	cout << "D3 n3(1, 2, 3, 4, 5);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ієрархія класу D3: " << endl;
	n3.show_D3();

}
