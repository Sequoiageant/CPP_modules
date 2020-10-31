class Pony {

public:
	Pony(std::string name, std::string color, std::string type);
	~Pony();
	std::string getColor(void) const;
	void		displayColor(void) const;
	void		displayDeath(void) const;

private:
	static int		_nbPony;

	int				_PonyIndex;
	std::string		_name;
	std::string		_color;
	std::string		_type;
	// int				_speed;
};