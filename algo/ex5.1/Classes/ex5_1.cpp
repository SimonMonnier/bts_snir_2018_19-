//***************************
// Fichier: ex5_1.cpp
//***************************

#include <iostream>

using namespace std;

int main()
{
	int nbr = 4;

	while (nbr < 1 || nbr > 3)
	{
		cout << "Entrez un nombre compris entre 1 et 3" << endl;
		cin >> nbr;
	}
	return 0;
}
