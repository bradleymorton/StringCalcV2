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
	auto pos = str.find(",");
	if (pos == std::string::npos)
	{
		pos = str.find("\n");
		if (pos == std::string::npos)
		{
			return std::stoi(str);
		}
		return std::stoi(str.substr(0, pos))
			+ std::stoi(str.substr(pos+1));
	}
	return std::stoi(str.substr(0, pos))
			+ std::stoi(str.substr(pos+1));
}