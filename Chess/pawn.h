#pragma once
#include "Figure.h"

class Pawn : public Figure
{
private:
	std::list<std::vector<int>> get_all_positions() const;
public:
	Pawn(int, int, int);
	std::list<std::vector<int>> get_possible_positions() const;
	std::list<std::vector<int>> get_strike_positions() const;
};
