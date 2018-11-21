
/*
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         AlarmeSonoreTest.h
 *  Classe        AlarmeSonore
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

#ifndef _ALARMESONORETEST_H
#define _ALARMESONORETEST_H

// Includes system C

// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Includes qt

// Includes application
#include "AlarmeSonore.h"

class AlarmeSonoreTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(AlarmeSonoreTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testAlarme);
    CPPUNIT_TEST_SUITE_END();

public :
    void setUp();
    void tearDown();

    void testConstructor();
    void testAlarme();

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _ALARMESONORETEST_H


