#pragma once
#include <string>

#include "Date.h"


struct Task // Задача
{ 
	std::string title;
	std::string description;
	Date deadline;
};
