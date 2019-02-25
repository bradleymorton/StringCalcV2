// StringCalc.cpp
//
// Created: 15 Feb 2019
// Updated: 15 Feb 2019
//
// Source for stringCalc().
#include <exception>

#include "StringCalc.hpp"

int stringCalc(const std::string & str)
{
	if (str.empty()) return 0;

	auto result = 0;

	if(str[1]=='-') throw std::exception();

	std::size_t pos, start = 0;
	auto delim_found = false;
	for (auto delim : {",", "\n"})
	{
		pos = str.find(delim);

		while (pos != std::string::npos)
		{
			delim_found = true;
			int current = std::stoi(str.substr(start, pos));
			if(current<0) throw std::exception();
			result += current;
			start = pos + 1;
			pos = str.find(delim, start);
		}
		if (delim_found)
			break;
	}

	if (pos == std::string::npos && !delim_found)
	{

		int num = std::stoi(str);
		if(num<0) throw std::exception();
		return num;
	}

	return result + std::stoi(str.substr(pos+1));
}