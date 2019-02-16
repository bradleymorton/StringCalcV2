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