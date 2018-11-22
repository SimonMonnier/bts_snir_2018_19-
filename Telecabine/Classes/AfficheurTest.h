
/*
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         AfficheurTest.h
 *  Classe        Afficheur
 *  @note         Classe en charge des tests unitaires
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef _AFFICHEURTEST_H
#define _AFFICHEURTEST_H

// Includes system C
#include <stdint.h>
// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Includes qt

// Includes application
#include "Afficheur.h"

class AfficheurTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(AfficheurTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testAfficheur);
    CPPUNIT_TEST_SUITE_END();

public :
    void setUp();
    void tearDown();

    void testConstructor();
    void testAfficheur();

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _AFFICHEURTEST_H


