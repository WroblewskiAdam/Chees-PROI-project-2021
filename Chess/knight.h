#pragma once
#include "Figure.h"
#include <list>
#include <vector>

class Knight : public Figure
{
private:
	std::list<std::vector<int>> get_all_positions()const;

public:

	Knight(int, int, int);
	std::list<std::vector<int>> get_possible_positions() const;
};
