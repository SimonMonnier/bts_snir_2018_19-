
/*
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         GestionnaireTest.h
 *  Classe        Gestionnaire
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

#ifndef _GESTIONNAIRETEST_H
#define _GESTIONNAIRETEST_H

// Includes system C

// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Includes qt

// Includes application
#include "Gestionnaire.h"

class GestionnaireTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(GestionnaireTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testGestionnaire);
    CPPUNIT_TEST_SUITE_END();

public :
    void setUp();
    void tearDown();

    void testConstructor();
    void testGestionnaire();

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _GESTIONNAIRETEST_H


