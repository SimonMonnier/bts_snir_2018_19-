/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         AsyncDataSource.cpp
 *  @brief        classe métier
 *  @version      0.1
 *  @date         06 déc. 2018 14:32:51
 *
 *  Description detaillee du fichier AsyncDataSource.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          06 déc. 2018 14:32:51 - Aucun pour l'instant
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
#include "AsyncDataSource.h"

/**
 * Constructeur
 */
AsyncDataSource::AsyncDataSource()
{
	// Exemple de source de données asynchrone (producteur) 
    cpt_ = 1; 
    QTimer *timer_ = new QTimer(this); 
    connect(timer_, SIGNAL(timeout()),this,SLOT(slotTimeout())); 
    timer_->start (1000); 
}

/**
 * Destructeur
 */
AsyncDataSource::~AsyncDataSource()
{
}

void AsyncDataSource::slotTimeout () 
{ 
	cout << "AsyncDataSource : update data on Model = "<< cpt_ << endl; 
    // Emission asynchrone vers le Modèle
    emit sigUpdateDataOnModel (cpt_++); 
} 

void AsyncDataSource::slotResetTimer () 
{ 
    cpt_ = 0; 
    cout << "AsyncDataSource : reset timer " << endl; 

}

// Methodes publiques
// ex :
/**
 * Exemple de description d'une methode
 *
 * @param un_parametre  Description d'un parametre
 * @return              Description du retour
 */
// ReturnType AsyncDataSource::NomMethode(Type parametre)
// {
// }

// Methodes protegees

// Methodes privees

// Programme principal
// Si c'est la classe principale du projet, on place une fonction main()
// Dans ce cas, on peut supprimer les fichiers de tests unitaires
// ex :
// int main(int argc, char *argv[])
// {
//    // Construction de l'instance de la classe principale
//    cout << "Construction de l'instance de la classe principale AsyncDataSource" << endl;
//    AsyncDataSource *asyncdatasource = new AsyncDataSource();
//    // Lancement de l'activité principale
//    return 0;
// }

