//***************************
// Fichier: ex5_3.cpp
//***************************

#include <iostream>

using namespace std;

int main()
{
	int nbr;
	int increment = 0;
	cout << "Entrez un nombre de départ :" << endl;
	cin >> nbr;
	while (increment < 10)
	{
		nbr++;
		increment++;
		cout << nbr << endl;
	}
	return 0;
}
