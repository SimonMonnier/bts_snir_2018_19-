
/*
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         PresenceCabineTest.h
 *  Classe        PresenceCabine
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

#ifndef _PRESENCECABINETEST_H
#define _PRESENCECABINETEST_H

// Includes system C

// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Includes qt

// Includes application
#include "PresenceCabine.h"

class PresenceCabineTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(PresenceCabineTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testPresenceCabine);
    CPPUNIT_TEST_SUITE_END();

public :
    void setUp();
    void tearDown();

    void testConstructor();
    void testPresenceCabine();

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _PRESENCECABINETEST_H


