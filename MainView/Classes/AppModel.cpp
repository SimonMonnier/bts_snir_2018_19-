/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         AppModel.cpp
 *  @brief        classe modéle
 *  @version      0.1
 *  @date         06 déc. 2018 11:31:25
 *
 *  Description detaillee du fichier AppModel.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          06 déc. 2018 11:31:25 - Aucun pour l'instant
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/


#include <iostream>
using namespace std;

// Includes qt

// Includes application
#include "AppModel.h"


AppModel *AppModel::model_ = NULL; 
/**
 * Constructeur
 */
AppModel::AppModel(QObject *parent): QObject(parent) 
{
	// Instanciation de la source de données 
    datasource_ = new AsyncDataSource(); 
    // Connexion bi-directionnelle avec la source de données 
    connect(datasource_,SIGNAL(sigUpdateDataOnModel(int)),this,SLOT(slotUpdateDataOnModel(int))); 
    connect(this,SIGNAL(sigResetTimer()),datasource_,SLOT(slotResetTimer())); 
}

/**
 * Destructeur
 */
AppModel::~AppModel()
{
	if (model_ == this) 
    model_ = 0; 
}

AppModel *AppModel::getUniqueInstance() 
{ 
    if (model_ == NULL) 
    { 
        model_ = new AppModel(); 
    } 
    return model_; 
}

void AppModel::slotUpdateDataOnModel(const int data) 
{ 
    cout << "Model : update data on View = "<< data << endl; 
    // vers la Vue 
    emit sigUpdateDataOnView(data); 
}

void AppModel::ResetTimer(void) 
{ 
    cout << "Model : ResetTimer " << endl; 
    // vers la source de données 
    emit sigResetTimer(); 
} 

// Methodes publiques
bool AppModel::IsValidPassword(QString pass) 
{ 
    bool ret = false; 
    if (pass == "1234") 
    { 
    	cout << "Model : Passwor OK " << endl; 
        ret = true; 
    } 
    else 
    { 
    	cout << "Model : Passwor KO " << endl; 
    } 
    return ret; 
}
