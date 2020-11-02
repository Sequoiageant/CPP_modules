#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

public:
	Zombie();
	~Zombie();
	void advert(void) const;
	void setName(std::string name);
	void setType(std::string type);

private:
	std::string _name;
	std::string _type;

};

#endif // ZOMBIE_HPP
