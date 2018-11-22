
/*
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         TourniquetTest.h
 *  Classe        Tourniquet
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

#ifndef _TOURNIQUETTEST_H
#define _TOURNIQUETTEST_H

// Includes system C

// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
// A décommenter si besoin cout, cin, ...
#include <iostream>
using namespace std;

// Includes qt

// Includes application
#include "Tourniquet.h"

class TourniquetTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TourniquetTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testTourniquet);
    CPPUNIT_TEST_SUITE_END();

public :
    void setUp();
    void tearDown();

    void testConstructor();
    void testTourniquet();

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _TOURNIQUETTEST_H


