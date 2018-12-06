/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         AsyncDataSource.h
 *  @brief        classe métier
 *  @version      0.1
 *  @date         06 déc. 2018 14:32:51
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                AsyncDataSource.cpp
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
#ifndef _ASYNCDATASOURCE_H
#define _ASYNCDATASOURCE_H

#include <QtCore> 

/** @brief Classe AsyncDataSource - Partie Métier 
 *  Description detaillee de la classe.
 */
class AsyncDataSource : public QObject
{
    Q_OBJECT 

public :
    /**
     * Constructeur
     */
    AsyncDataSource();
    /**
     * Destructeur
     */
    ~AsyncDataSource();

public slots: 
    void slotTimeout(); 
    void slotResetTimer();

signals : 
    void sigUpdateDataOnModel(int);

  

protected :

private :
    int cpt_;
    QTimer* timer_;
};


#endif  // _ASYNCDATASOURCE_H

