#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

# include <string>

class Zombie;

class ZombieHorde
{

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void	setZombieType(std::string type);
	void	announce(void) const;
	void	soloAnnounce(void) const;
	void	selectZombie(int n);

private:
	std::string _type;
	Zombie		*_horde;
	int 		_selected_zombie;
	int			_nbZombies;
	std::string	getRandomName(int len) const;

};

#endif // ZOMBIE_HORDE_HPP
