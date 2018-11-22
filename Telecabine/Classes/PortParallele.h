/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         PortParallele.h
 *  @brief        interaction avec les ports
 *  @version      0.1
 *  @date         07 nov. 2018 11:26:18
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                PortParallele.cpp
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
#ifndef _PORTPARALLELE_H
#define _PORTPARALLELE_H

// Includes system C
#include <stdint.h>  // definition des types int8_t, int16_t ...

// Includes system C++

// Includes qt

// Includes application

// Constantes
const uint16_t kLpt1 = 0x378;
const uint16_t kLpt2 = 0x278;
// Masques de registre de Commande
const uint8_t kMasqueStrobe = 0x01;
const uint8_t kMasqueStatusTourniquet = 0x80;
const uint8_t kMasqueLockTourniquet = 0x04;
const uint8_t kMasqueCabine = 0x40;


// ex :
// const int kDaysInAWeek = 7;

// Enumerations
enum Registre //calcul de l adresse des registres du port parallele
{
	kData = 0, //adresse de registre data = adresse de base + kData (=0)
	kStatus, //adresse de registre status = adresse de base + kStatus (=1)
	kCommande //adresse de registre commande = adresse de base + Kcommande (=2)
};
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

/** @brief interaction avec les ports
 *  Description detaillee de la classe.
 */
class PortParallele
{
public :
    /**
     * Constructeur
     */
	PortParallele();
    /**
     * Destructeur
     */
	~PortParallele();

    // Methodes publiques de la classe
    // ex : ReturnType NomMethode(Type);

	void SetStrobe(void);

	void ResetStrobe(void);

	int GetStrobe(void);

	bool GetBusy(void);

	void SetDisplayer(uint8_t number);

	void ResetDisplayer(void);

	void SetInitPrinter(void);

	int GetInitPrinter(void);

	void ResetInitPrinter(void);

	int GetAck(void);

	void setAdresse_(unsigned long int new_var){adresse_ = new_var;}

	unsigned long int getAdresse_(void){return adresse_;}

	void setAdresse(unsigned long int valeur);

	void SetData(uint8_t data);

	uint8_t GetData(void);

    // Pour les associations :
    // Methodes publiques setter/getter (mutateurs/accesseurs) des attributs prives
    // ex :
    // void setNomAttribut(Type nomAttribut) { nomAttribut_ = nomAttribut; }
    // Type getNomAttribut(void) const { return nomAttribut_; }

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives
    // ex :
    // Type nomAttribut_;
	unsigned long int adresse_;

    // Methodes privees
	void AccesIO(void);

	void initAttributes(void);


// Methodes publiques inline
// ex :
// inline void PortParallele::maMethodeInline(Type valeur)
// {
//   
// }
// inline Type PortParallele::monAutreMethode_inline_(void)
// {
//   return 0;
// }
};
#endif  // _PORTPARALLELE_H

