/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         MyTimer.cpp
 *  @brief        
 *  @version      0.1
 *  @date         29 nov. 2018 17:24:48
 *
 *  Description detaillee du fichier MyTimer.cpp
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
#include "MyTimer.h"

/**
 * Constructeur
 */
MyTimer::MyTimer(QWidget *parent) : QWidget(parent)
{
  // on fixe les dimension du widget
  setMinimumSize(190,100);
  setMaximumSize(190,100);

  // création du timer
  timer_ = new QTimer(this);

  // connexion du signal timeout du timer au slot slotTimeOut
  connect(timer_, SIGNAL(timeout()),this,SLOT(slotTimeOut()));

  // création et connexion du bouton start
  QPushButton *pbStart = new QPushButton("Start",this);
  pbStart->setGeometry(20,10,70,30);
  pbStart->setFont( QFont("Times",18,QFont::Bold));
  connect(pbStart, SIGNAL(clicked()),this,SLOT(slotStart()));

  // création et connexion du bouton stop
  QPushButton *pbStop = new QPushButton("Stop",this);
  pbStop->setGeometry(90,10,70,30);
  pbStop->setFont( QFont("Times",18,QFont::Bold));
  connect(pbStop, SIGNAL(clicked()),this,SLOT(slotStop()));

  // création et connexion du bouton quit
  QPushButton *pbQuit = new QPushButton("Quit",this);
  pbQuit->setGeometry(50,50,70,30);
  pbQuit->setFont( QFont("Times",18,QFont::Bold));

  // on connecte le signal du bouton quit à l'alias de l'application qApp
  connect(pbQuit, SIGNAL(clicked()),qApp ,SLOT(quit()));

}

/**
 * Destructeur
 */
MyTimer::~MyTimer()
{
	delete timer_;
}

/**
 * Slots
 */
void MyTimer::slotStart()
{
  timer_->start(1000);
}

void MyTimer::slotStop()
{
  timer_->stop();
}

void MyTimer::slotTimeOut()
{
  cout << "...top" << endl ;
}

// Programme principal
int main(int argc, char *argv[])
{
   // déclaration de l'application
   QApplication app(argc, argv);

   // Construction de l'instance de la classe principale
   cout << "Construction de l'instance de la classe principale MyTimer" << endl;
   MyTimer *mytimer = new MyTimer();
   mytimer->show();
  // exécution de l'application
  return app.exec();
}
