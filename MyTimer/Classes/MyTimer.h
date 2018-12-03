/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         MyTimer.h
 *  @brief        
 *  @version      0.1
 *  @date         29 nov. 2018 17:24:48
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                MyTimer.cpp
 *                C++ Google Style :
 *                http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml
 */
//@brief        Classe MyTimer exemple Qt
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef _MYTIMER_H
#define _MYTIMER_H

// Includes qt
#include <QWidget>
#include <QtCore>
#include <QApplication>
#include <QPushButton>
#include <QFont>
// Includes system C++
#include <iostream>
using namespace std;

/** @brief Classe MyTimer exemple Qt
 *  Description detaillee de la classe.
 **/
class MyTimer : public QWidget
{

    Q_OBJECT

public :

    MyTimer(QWidget *parent=0);
    ~MyTimer();

public slots:

    void slotStart();
    void slotStop();
    void slotTimeOut();

    
protected :
   

private :
   
	QTimer *timer_;
};



#endif  // _MYTIMER_H

