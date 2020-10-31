class Pony {

public:
	Pony(std::string name, std::string color, std::string type);
	~Pony();
	void		displayColor(void) const;

private:
	static int		_nbPony;

	std::string		_name;
	std::string		_color;
	std::string		_type;
};
