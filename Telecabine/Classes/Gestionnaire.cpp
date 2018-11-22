/**
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         Gestionnaire.cpp
 *  @brief        Gestionnaire telecabine
 *  @version      0.1
 *  @date         22 nov. 2018 10:25:59
 *
 *  Description detaillee du fichier Gestionnaire.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          22 nov. 2018 10:25:59 - Aucun pour l'instant
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
#include <iostream>
using namespace std;

// Includes qt

// Includes application
#include "Gestionnaire.h"

/**
 * Constructeur
 */
Gestionnaire::Gestionnaire()
{
	afficheur = new Afficheur();
	alarmesonore = new AlarmeSonore();
	portillon = new Portillon();
	presencecabine = new PresenceCabine();
	portparallele = new PortParallele();
	tourniquet = new Tourniquet();
}

/**
 * Destructeur
 */
Gestionnaire::~Gestionnaire()
{
}

void Gestionnaire::gererTelecabine()
{
	afficheur->setPort(portparallele);
	alarmesonore->setPort(portparallele);
	presencecabine->setPort(portparallele);
	tourniquet->setPort(portparallele);
	portillon->Verrouiller();
	tourniquet->verrouiller();
	while(true)
	{
		afficheur->Eteindre();
		while(0 == presencecabine->capteurCabine())
		{}
		cout << "Arrivée de la cabine !" << endl;
		sleep(4);
		portillon->Deverrouiller();
		sleep(2);
		cout << "Attente sortie de tout les passagers !" << endl;
		sleep(10);
		portillon->Verrouiller();
		tourniquet->setPlace(9);
		tourniquet->deverrouiller();
		afficheur->Afficher(tourniquet->getPlace()<<4);
		while(tourniquet->getPlace() > 0)
		{
	    	if(true == tourniquet->detecterPassage())
	    	{
	    		afficheur->Afficher(tourniquet->getPlace()<<4);
	    	}
		}
		tourniquet->verrouiller();
		alarmesonore->Activer();
		sleep(4);
		alarmesonore->Desactiver();
		while(1 == presencecabine->capteurCabine())
		{}
		cout << "La cabine se prépare à partir, fermeture des portes !" << endl;
		sleep(3);
		cout << "Départ de la cabine !" << endl;
		sleep(3);
		cout << "La cabine se déplace !" << endl;
		sleep(3);
	}
}
// Methodes publiques
// ex :
/**
 * Exemple de description d'une methode
 *
 * @param un_parametre  Description d'un parametre
 * @return              Description du retour
 */
// ReturnType Gestionnaire::NomMethode(Type parametre)
// {
// }

// Methodes protegees

// Methodes privees

// Programme principal
// Si c'est la classe principale du projet, on place une fonction main()
// Dans ce cas, on peut supprimer les fichiers de tests unitaires
// ex :
int main(int argc, char *argv[])
{
   // Construction de l'instance de la classe principale
  cout << "Construction de l'instance de la classe principale Gestionnaire" << endl;
  Gestionnaire *gestionnaire = new Gestionnaire();
  //Lancement de l'activité principale
  gestionnaire->gererTelecabine();
  return 0;
}

