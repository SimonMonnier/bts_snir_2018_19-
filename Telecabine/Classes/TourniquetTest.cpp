
/*
 *  Copyright (C) 2018  root  (root@appert44.org)
 *  @file         TourniquetTest.cpp
 *  Classe        Tourniquet
 *  @note         Implementation de la classe en charge des tests unitaires
 */

// Includes system C

// Includes system C++
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <unistd.h>
// Includes qt

// Includes application
#include "TourniquetTest.h"
#include "PortParallele.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TourniquetTest);

// Exemple d'assertions possibles
// # CPPUNIT_ASSERT(condition)
// Assertions that a condition is true.
// # CPPUNIT_ASSERT_MESSAGE(message, condition)
// Assertion with a user specified message.
// # CPPUNIT_FAIL(message)
// Fails with the specified message
// # CPPUNIT_ASSERT_EQUAL(expected, actual)
// Asserts that two values are equals.
// # CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual)
// Asserts that two values are equals, provides additional message on failure
// # CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, delta)

// setUp() to initialize the variables you will use for test
void TourniquetTest::setUp()
{
}

// tearDown() to release any permanent resources you allocated in setUp()
void TourniquetTest::tearDown()
{
}

// Suite des tests unitaires

void TourniquetTest::testConstructor()
{
    // Construction de l'instance de classe a tester
    Tourniquet *tourniquet = new Tourniquet();
    CPPUNIT_ASSERT(tourniquet != NULL);
    delete tourniquet;
}

void TourniquetTest::testTourniquet()
{
    // Construction de l'instance de classe a tester
    Tourniquet *tourniquet = new Tourniquet();
    CPPUNIT_ASSERT(tourniquet != NULL);
    PortParallele *portparallele = new PortParallele();
    CPPUNIT_ASSERT(portparallele != NULL);

    tourniquet->setPort(portparallele);
    tourniquet->setPlace(9);
    tourniquet->deverrouiller();
    cout << "Places disponible : "<< tourniquet->getPlace() << endl;
    while(tourniquet->getPlace() > 0)
    {
    	if(true == tourniquet->detecterPassage())
    	{
    		cout << "Places disponible : "<< tourniquet->getPlace() << endl;
    	}
    }
    tourniquet->verrouiller();
    // Test unitaire d'une methode publique de la classe
    // Utilisation des macros CPPUNIT_ASSERT, CPPUNIT_ASSERT_EQUAL, etc.
    delete tourniquet;
    delete portparallele;
}

// the main method
int main(int argc, char* argv[])
{
    // informs test-listener about testresults
    CPPUNIT_NS::TestResult testresult;

    // register listener for collecting the test-results
    CPPUNIT_NS::TestResultCollector collectedresults;
    testresult.addListener(&collectedresults);

    // register listener for per-test progress output
    CPPUNIT_NS::BriefTestProgressListener progress;
    testresult.addListener(&progress);

    // insert test-suite at test-runner by registry
    CPPUNIT_NS::TestRunner testrunner;
    testrunner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
    testrunner.run(testresult);

    // output results in compiler-format
    CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);
    compileroutputter.write();

    // for hudson
    std::ofstream file( "Tourniquet-cppunit-report.xml" );
    CPPUNIT_NS::XmlOutputter xmloutputter(&collectedresults, file);
    xmloutputter.write();
    file.close();

    // return 0 if tests were successful
    return collectedresults.wasSuccessful() ? 0 : 1;
}

