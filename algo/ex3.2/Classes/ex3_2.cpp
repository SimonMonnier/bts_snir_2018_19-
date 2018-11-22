//***************************
// Fichier: ex3_2.cpp
//***************************

#include <iostream>

using namespace std;

int main()
{
	int produit;
	int nbr1;
	int nbr2;

	cout << "Entrez un nombre" << endl;
	cin >> nbr1;
	cout << "Entrez un deuxiéme nombre" << endl;
	cin >> nbr2;
	produit = nbr1 * nbr2;
	if (produit < 0)
		cout << "le produit " << produit << " est négatif" << endl;
	else if (produit > 0)
		cout << "le produit " << produit << " est positif" << endl;
	return 0;
}
