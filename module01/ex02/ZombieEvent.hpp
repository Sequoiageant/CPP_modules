#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

# include <string>

class Zombie;

class ZombieEvent
{

public:
	ZombieEvent();
	~ZombieEvent();
	
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name) const;
	void	randomChump(void) const;

private:
	std::string type;

};

#endif // ZOMBIE_EVENT_HPP