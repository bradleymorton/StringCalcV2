// catch_test_suites.cpp
// Original Author: Glenn G. Chappell
// Modified by: Charles Emerson
//
// Created: 13 Feb 2019 (from da6_test_suites.cpp)
// Updated: 13 Feb 2019
//
// For CS 372 Spring 2019
// Tests for CS 372 in class TDD Kata: test suites.
// Uses the "Catch" unit-testing framework, version 2

// Includes for code to be tested
#include "StringCalc.hpp"


#define CATCH_CONFIG_FAST_COMPILE
						   // Disable some features for faster compile
#include "catch.hpp"	   // For the "Catch" unit-testing framework

// Additional includes for this test program
#include <vector>
#include <utility>

// *********************************************************************
// Helper Functions/Classes for This Test Program
// *********************************************************************


// *********************************************************************
// Test Cases
// *********************************************************************
TEST_CASE( "An empty string returns zero" )
{
	SECTION( "Returns zero" )
	{
		REQUIRE( stringCalc("") == 0 );
	}
}

TEST_CASE( "A single number returns the value" )
{
	SECTION( "Returns value" )
	{
		REQUIRE( stringCalc("0") == 0 );
		REQUIRE( stringCalc("1") == 1 );
		REQUIRE( stringCalc("2") == 2 );
		REQUIRE( stringCalc("3") == 3 );
		REQUIRE( stringCalc("4") == 4 );
		REQUIRE( stringCalc("5") == 5 );
		REQUIRE( stringCalc("5") == 5 );
		REQUIRE( stringCalc("6") == 6 );
		REQUIRE( stringCalc("7") == 7 );
		REQUIRE( stringCalc("8") == 8 );
		REQUIRE( stringCalc("9") == 9 );
	}
}

TEST_CASE( "Two numbers, comma delimited, returns the sum" )
{
	SECTION( "Returns value" )
	{
		REQUIRE( stringCalc("0,0") == 0 );
		REQUIRE( stringCalc("1,1") == 2 );
		REQUIRE( stringCalc("2,2") == 4 );
	}
}