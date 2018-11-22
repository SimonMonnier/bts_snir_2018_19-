/**
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         PresenceCabine.cpp
 *  @brief        capteur presence cabine
 *  @version      0.1
 *  @date         22 nov. 2018 10:25:14
 *
 *  Description detaillee du fichier PresenceCabine.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          22 nov. 2018 10:25:14 - Aucun pour l'instant
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
#include "PresenceCabine.h"

/**
 * Constructeur
 */
PresenceCabine::PresenceCabine()
{
	port_=0;
}

/**
 * Destructeur
 */
PresenceCabine::~PresenceCabine()
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
// ReturnType PresenceCabine::NomMethode(Type parametre)
// {
// }
	int PresenceCabine::capteurCabine()
	{
		return port_->GetAck();
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
//    cout << "Construction de l'instance de la classe principale PresenceCabine" << endl;
//    PresenceCabine *presencecabine = new PresenceCabine();
//    // Lancement de l'activité principale
//    return 0;
// }

