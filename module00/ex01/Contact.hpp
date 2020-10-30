#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

public:

	// Contact		Contact(void);
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getLogin(void) const;
	void		printContact(void) const;
	void		printPreview(int index);
	void		setContact(void);
	static int 	getCount(void);
	static void	incCount(void);


private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favourite_meal;
	std::string underware_color;
	std::string darkset_secret;
	static int	count;
};

#endif
