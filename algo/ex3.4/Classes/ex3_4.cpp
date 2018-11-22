//***************************
// Fichier: ex3_4.cpp
//***************************

#include <iostream>

using namespace std;

int main()
{
	int nbr = 0;

	cout << "Entrez un nombre" << endl;
	cin >> nbr;
	if (nbr < 0)
		cout << "le nombre " << nbr << " est négatif" << endl;
	else if (nbr > 0)
		cout << "le nombre " << nbr << " est positif" << endl;
	else if (nbr == 0)
			cout << "le nombre " << nbr << " est ni positif, ni négatif" << endl;
	return 0;
}
