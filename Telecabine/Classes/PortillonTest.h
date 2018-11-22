
/*
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         PortillonTest.h
 *  Classe        Portillon
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

#ifndef _PORTILLONTEST_H
#define _PORTILLONTEST_H

// Includes system C

// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Includes qt

// Includes application
#include "Portillon.h"

class PortillonTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(PortillonTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testPortillon);
    CPPUNIT_TEST_SUITE_END();

public :
    void setUp();
    void tearDown();

    void testConstructor();
    void testPortillon();

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _PORTILLONTEST_H


