/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         MainView.cpp
 *  @brief        Fenetre principale
 *  @version      0.1
 *  @date         06 déc. 2018 09:14:47
 *
 *  Description detaillee du fichier MainView.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          06 déc. 2018 09:14:47 - Aucun pour l'instant
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <unistd.h>
#include <iostream>
using namespace std;
// Includes qt
#include <QMessageBox> 
// Includes application
#include "MainView.h"

/**
 * Constructeur
 */
MainView::MainView()
{
	// Construction de la vue
	setupUi(this);
	model_ = AppModel::getUniqueInstance();
    // Connexion des signaux des différents widgets et boutons de la vue 
    connect(this,SIGNAL(sigDisplayDataOnWidget(int)),lcdNumber,SLOT(display(int))); 
	connect(pbValid,SIGNAL(clicked()),this,SLOT(slotActionValid())); 
    connect(pbClose, SIGNAL(clicked()), this, SLOT(close()));
    connect(model_, SIGNAL(sigUpdateDataOnView(int)), lcdNumber, SLOT(display(int)));
    //Gestion des caratère spéciaux
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
}

/**
 * Destructeur
 */
MainView::~MainView()
{
	delete model_;
}

// Mise à jour du QLCDNumber
void MainView::slotUpdateDataOnView(const int &data) 
{ 
    cout << "View : update data on widget = "<< data << endl; 
    emit sigDisplayDataOnWidget(data);
}

// Le Contrôleur devra interroger le Modèle en cas d'action sur la Vue 
void MainView::slotActionValid(void) 
{ 
    cout << "View : test password " << endl; 
    if (true == model_->IsValidPassword(passwd->text()))
    {
    	model_->ResetTimer();
    	valeurpass->setText("Bon password -> Remise à zéro du chronométre ");
    }
    else
    {
    	valeurpass->setText("Mauvais password -> pas de remise à zéro du chronométre ");
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
// ReturnType MainView::NomMethode(Type parametre)
// {
// }

// Methodes protegees

// Methodes privees

// Programme principal
// Si c'est la classe principale du projet, on place une fonction main()
// Dans ce cas, on peut supprimer les fichiers de tests unitaires
// ex :
/*int main(int argc, char *argv[])
{
	   // déclaration de l'application
	QApplication app(argc, argv);
    // Construction de l'instance de la classe principale
    cout << "Construction de l'instance de la classe principale MainView" << endl;
    MainView *mainview = new MainView();
    // Lancement de l'activité principale
    mainview->show();
    return app.exec();
}*/

