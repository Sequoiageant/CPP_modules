#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human
{

public:
	Human();
	~Human();
	std::string identify(void) const;
	const Brain& getBrain(void) const;

private:
	const Brain _brain;
};

#endif // HUMAN_HPP
