// StringCalc.cpp
//
// Created: 15 Feb 2019
// Updated: 15 Feb 2019
//
// Source for stringCalc().


#include "StringCalc.hpp"

int stringCalc(const std::string & str)
{
	if (str.empty()) return 0;
	return std::stoi(str);
}