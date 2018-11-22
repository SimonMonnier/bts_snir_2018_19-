
/*
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         PortParalleleTest.h
 *  Classe        PortParallele
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

#ifndef _PORTPARALLELETEST_H
#define _PORTPARALLELETEST_H

// Includes system C

// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Includes qt

// Includes application
#include "PortParallele.h"

class PortParalleleTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(PortParalleleTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testStrobe);
    CPPUNIT_TEST(testBusy);
    CPPUNIT_TEST(testSetDisplayer);
    CPPUNIT_TEST(testResetDisplayer);
    CPPUNIT_TEST(testInitPrinter);
    CPPUNIT_TEST(testGetAck);
    CPPUNIT_TEST_SUITE_END();



public :
    void setUp();
    void tearDown();
    void testConstructor();
    void testStrobe();
    void testBusy();
    void testSetDisplayer();
    void testResetDisplayer();
    void testInitPrinter();
    void testGetAck();



protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _PORTPARALLELETEST_H


