
/*
 *  Copyright (C) 2018  smonnier  (smonnier@appert44.org)
 *  @file         MainViewTest.h
 *  Classe        MainView
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

#ifndef _MAINVIEWTEST_H
#define _MAINVIEWTEST_H

// Includes system C

// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Includes qt

// Includes application
#include "MainView.h"

class MainViewTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(MainViewTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testMainView);
    CPPUNIT_TEST_SUITE_END();

public :
    void setUp();
    void tearDown();

    void testConstructor();
    void testMainView();

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _MAINVIEWTEST_H


