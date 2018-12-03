/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         Chronometre.cpp
 *  @brief        
 *  @version      0.1
 *  @date         29 nov. 2018 17:24:48
 *
 *  Description detaillee du fichier Chronometre.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          29 nov. 2018 17:24:48 - Aucun pour l'instant
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

// Includes application
#include "Chronometre.h"

/**
 * Constructeur
 */
Chronometre::Chronometre(QWidget *parent) : QWidget(parent)
{
  // on fixe les dimension du widget

  QHBoxLayout *layouth = new QHBoxLayout;

  setLayout(layouth);
  interrupt_ = 1;
  // création du timer
  timer_ = new QTimer(this);
  // création de lcd
  lcd_ = new QLCDNumber(this);

  // création et connexion du bouton start
  QPushButton *pbStart = new QPushButton("Start");
  connect(pbStart, SIGNAL(clicked()),this,SLOT(slotStart()));

  // création et connexion du bouton pause
  QPushButton *pbStop = new QPushButton("Pause");
  connect(pbStop, SIGNAL(clicked()),this,SLOT(slotPause()));

  // création et connexion du bouton quit
  QPushButton *pbQuit = new QPushButton("Quit");
  // on connecte le signal du bouton quit à l'alias de l'application qApp
  connect(pbQuit, SIGNAL(clicked()),qApp ,SLOT(quit()));

  // création et connexion du bouton raz
  QPushButton *pbRaz = new QPushButton("R.A.Z");
  connect(pbRaz, SIGNAL(clicked()),this,SLOT(slotRaz()));

  // connexion du signal timeout du timer au slot interrupt
  connect(timer_, SIGNAL(timeout()),this,SLOT(slotInterrupt()));
  // connexion du signal go du timer au slot display
  connect(this, SIGNAL(go(int)),lcd_,SLOT(display(int)));

  layouth->addWidget(pbStart);
  layouth->addWidget(pbStop);
  layouth->addWidget(pbRaz);
  layouth->addWidget(pbQuit);
  layouth->addWidget(lcd_);

}

/**
 * Destructeur
 */
Chronometre::~Chronometre()
{
	delete timer_;
}

//méthode publique
void Chronometre::goo()
{
    emit go(interrupt_);
}

/**
 * Slots
 */
void Chronometre::slotStart()
{
  timer_->start(1000);
}

void Chronometre::slotPause()
{
  timer_->stop();
}

void Chronometre::slotInterrupt()
{
    goo();
	interrupt_ = interrupt_ + 1;
}

void Chronometre::slotRaz()
{
  timer_->stop();
  interrupt_ = 1;
  lcd_->display(0);
}
// Programme principal
int main(int argc, char *argv[])
{
   // déclaration de l'application
   QApplication app(argc, argv);

   // Construction de l'instance de la classe principale
   cout << "Construction de l'instance de la classe principale Chronometre" << endl;
   Chronometre *chronometre = new Chronometre();
   chronometre->show();

  // exécution de l'application
  return app.exec();
}
