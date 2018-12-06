/**
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         AppModel.h
 *  @brief        classe modéle
 *  @version      0.1
 *  @date         06 déc. 2018 11:31:25
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                AppModel.cpp
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
#ifndef _APPMODEL_H
#define _APPMODEL_H

#include <stdlib.h>
#include <QtCore> 
// Includes application 
#include "AsyncDataSource.h" 

/** @brief Classe AppModel - Partie Modele du MVC 
 *  Description detaillee de la classe. 
 */ 

class AppModel : public QObject
{
    Q_OBJECT 
public :

    /** 
     * Singleton 
     */ 
    static AppModel *getUniqueInstance();
    /**
     * Destructeur
     */
    ~AppModel();

    bool IsValidPassword(QString pass); 
    void ResetTimer(); 

    public slots: 
        // Slot pour signaux en provenance de la source de données 
        void slotUpdateDataOnModel(const int data); 

    signals: 
        // Signaux vers la Vue 
        void sigUpdateDataOnView(const int data); 

        // Signaux vers la source de données 
        void sigResetTimer(); 


protected :


private :
    
    AsyncDataSource * datasource_; 
    // Stocke l'instance (singleton) 
    static AppModel *model_; 
    /**
     * Constructeur ()
     */
    AppModel(QObject *parent=0);
};


#endif  // _APPMODEL_H

