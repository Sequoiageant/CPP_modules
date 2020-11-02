#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{

public:
	Brain();
	~Brain();
	int			getNbOfNeurons() const;
	std::string	identify() const;

private:
	int	_nbOfNeurons;
};

#endif // BRAIN_HPP
