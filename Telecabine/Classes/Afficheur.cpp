/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         Afficheur.cpp
 *  @brief        Affiche le nombre de passagé
 *  @version      0.1
 *  @date         15 nov. 2018 11:53:36
 *
 *  Description detaillee du fichier Afficheur.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          15 nov. 2018 11:53:36 - Aucun pour l'instant
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
#include "Afficheur.h"

/**
 * Constructeur
 */
Afficheur::Afficheur()
{
	port_=0;
}

/**
 * Destructeur
 */
Afficheur::~Afficheur()
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
// ReturnType Afficheur::NomMethode(Type parametre)
// {
// }
void Afficheur::Afficher(uint8_t number)
{
	port_->SetDisplayer(number);
}

void Afficheur::Eteindre()
{
	port_->ResetDisplayer();
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
//    cout << "Construction de l'instance de la classe principale Afficheur" << endl;
//    Afficheur *afficheur = new Afficheur();
//    // Lancement de l'activité principale
//    return 0;
// }

