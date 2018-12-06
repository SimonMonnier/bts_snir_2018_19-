/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         MainView.h
 *  @brief        Fenetre principale
 *  @version      0.1
 *  @date         06 déc. 2018 09:14:47
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                MainView.cpp
 *                C++ Google Style :
 *                http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef _MAINVIEW_H
#define _MAINVIEW_H

#include <QMainWindow>
#include <QTextCodec>
// Includes application 
#include "ui_MainView.h"
#include "AppModel.h"
class MainView : public QMainWindow, private Ui_MainView
{
	Q_OBJECT

public :
   
    MainView();
    
    ~MainView();

	private slots: 
		void slotUpdateDataOnView(const int &data); 
    	void slotActionValid(void); 

	signals : 
    	void sigDisplayDataOnWidget(int);

protected :
   
private :

	AppModel* model_;
   
};

#endif  // _MAINVIEW_H

