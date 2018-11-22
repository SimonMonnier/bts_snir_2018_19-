//***************************
// Fichier: ex5_2.cpp
//***************************

#include <iostream>

using namespace std;

int main()
{
	int nbr = 0;
	cout << "Entrez un nombre compris entre 10 et 20" << endl;
	cin >> nbr;
	while (nbr < 10 || nbr > 20)
	{
		if (nbr < 10)
		{
			cout << "Plus grand !!!" << endl;
			cin >> nbr;
		}
		if (nbr > 20)
		{
			cout << "Plus petit !!!" << endl;
			cin >> nbr;
		}
	}
	return 0;
}
