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

	auto result = 0;

	std::size_t pos, start = 0;
	auto delim_found = false;
	for (auto delim : {",", "\n"})
	{
		pos = str.find(delim);

		while (pos != std::string::npos)
		{
			delim_found = true;
			result += std::stoi(str.substr(start, pos));
			start = pos + 1;
			pos = str.find(delim, start);
		}
		if (delim_found)
			break;
	}

	if (pos == std::string::npos && !delim_found)
	{
		return std::stoi(str);
	}

	return result + std::stoi(str.substr(pos+1));
}