/**
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         Portillon.h
 *  @brief        portillon
 *  @version      0.1
 *  @date         22 nov. 2018 10:23:51
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                Portillon.cpp
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
#ifndef _PORTILLON_H
#define _PORTILLON_H

// Includes system C
#include <stdint.h>  // definition des types int8_t, int16_t ...
#include "PortParallele.h"
// Includes system C++

// Includes qt

// Includes application

// Constantes
// ex :
// const int kDaysInAWeek = 7;

// Enumerations
// ex :
// enum Couleur
// {
//     kBlue = 0,
//     kWhite,
//     kRed,
// };

// Structures
// ex:
// struct UrlTableProperties
// {
//  string name;
//  int numEntries;
// }

// Declarations de classe avancees
// ex:
// class MaClasse;

/** @brief portillon
 *  Description detaillee de la classe.
 */
class Portillon
{
public :
    /**
     * Constructeur
     */
    Portillon();
    /**
     * Destructeur
     */
    ~Portillon();

    // Methodes publiques de la classe
    // ex : ReturnType NomMethode(Type);
    void Verrouiller();

    void Deverrouiller();
    // Pour les associations :
    // Methodes publiques setter/getter (mutateurs/accesseurs) des attributs prives
    // ex :
    // void setNomAttribut(Type nomAttribut) { nomAttribut_ = nomAttribut; }
    // Type getNomAttribut(void) const { return nomAttribut_; }
    //void setPort(PortParallele *port){port_ = port;}

    //PortParallele * getPort(void){return port_;}

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives
    // ex :
    // Type nomAttribut_;
    //PortParallele * port_;
    // Methodes privees
};

// Methodes publiques inline
// ex :
// inline void Portillon::maMethodeInline(Type valeur)
// {
//   
// }
// inline Type Portillon::monAutreMethode_inline_(void)
// {
//   return 0;
// }

#endif  // _PORTILLON_H

