//***************************
// Fichier: ex1_6.cpp
//***************************

#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 2;
	int c;
	cout << a << endl;
	cout << b << endl;
	c = b;
	b = a;
	a = c;
	cout << a << endl;
	cout << b << endl;

        return 0;
}
