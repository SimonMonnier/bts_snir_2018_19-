/**
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         Tourniquet.cpp
 *  @brief        capteur tourniquet
 *  @version      0.1
 *  @date         22 nov. 2018 10:25:40
 *
 *  Description detaillee du fichier Tourniquet.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          22 nov. 2018 10:25:40 - Aucun pour l'instant
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

// Includes system C

// Includes system C++
// A décommenter si besoin cout, cin, ...
// #include <iostream>
// using namespace std;

// Includes qt

// Includes application
#include "Tourniquet.h"


/**
 * Constructeur
 */
Tourniquet::Tourniquet()
{
	port_=0;
	places_=0;
	nb1_=false;
}

/**
 * Destructeur
 */
Tourniquet::~Tourniquet()
{
}

// Methodes publiques
// ex :
/**
 * Exemple de description d'une methode
 *
 * @param un_parametre  Description d'un parametre
 * @return              Description du retour
 */
// ReturnType Tourniquet::NomMethode(Type parametre)
// {
// }
void Tourniquet::setPlace(int number)
{
	places_=number;
}

int Tourniquet::getPlace()
{
	return places_;
}

void Tourniquet::verrouiller()
{
	port_->SetInitPrinter();
}

void Tourniquet::deverrouiller()
{
	port_->ResetInitPrinter();
}

bool Tourniquet::detecterPassage()
{
	bool status = false;
	bool nb2 = true;
	nb1_=port_->GetBusy();
	usleep(250000);
	nb2=port_->GetBusy();
	if(nb1_ == false && nb2 == true)
		{
			places_--;
			status = true;
		}
	nb1_ = nb2;
	return status;
}
// Methodes protegees

// Methodes privees

// Programme principal
// Si c'est la classe principale du projet, on place une fonction main()
// Dans ce cas, on peut supprimer les fichiers de tests unitaires
// ex :
// int main(int argc, char *argv[])
// {
//    // Construction de l'instance de la classe principale
//    cout << "Construction de l'instance de la classe principale Tourniquet" << endl;
//    Tourniquet *tourniquet = new Tourniquet();
//    // Lancement de l'activité principale
//    return 0;
// }

