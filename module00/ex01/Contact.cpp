#include "PhoneBook.hpp"
#include "Contact.hpp"

// Contact::Contact(void)
// {
// 	Contact::Count++;
// 	return;
// }


void	Contact::setContact()
{
	std::cout << "First name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Login: ";
	std::getline(std::cin, this->login);
	std::cout << "Postal Adress: ";
	std::getline(std::cin, this->postal_address);
	std::cout << "Email Adress: ";
	std::getline(std::cin, this->email_address);
	std::cout << "Phone: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Birthday: ";
	std::getline(std::cin, this->birthday_date);
	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->favourite_meal);
	std::cout << "Underwear color: ";
	std::getline(std::cin, this->underware_color);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkset_secret);
}

void    Contact::printContact(void) const 
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "login: " << this->login << std::endl;
	std::cout << "postal address: " << this->postal_address << std::endl;
	std::cout << "email: " << this->email_address << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "birthday: " << this->birthday_date << std::endl;
	std::cout << "favorite meal: " << this->favourite_meal << std::endl;
	std::cout << "underwear color: " << this->underware_color << std::endl;
	std::cout << "darkest secret: " << this->darkset_secret << std::endl;
}

void	Contact::printPreview(int index) 
{
	if (this->first_name.size() > 10)
	{
		this->first_name.resize(10);
		this->first_name[9] = '.';
    }
    if (this->last_name.size() > 10)
    {
		this->last_name.resize(10);
		this->last_name[9] = '.';
    }
    if (this->nickname.size() > 10)
    {
		this->nickname.resize(10);
		this->nickname[9] = '.';
    }
    std::cout << std::setw(10) << index
    << " | " << std::setw(10) << this->first_name
    << " | " << std::setw(10) << this->last_name
    << " | " << std::setw(10) << this->nickname
    << std::endl;
}

std::string	Contact::getFirstName(void) const
{
	return (this->first_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->last_name);
}

std::string	Contact::getLogin(void) const
{
	return (this->login);
}

int			Contact::getCount(void)
{
	return (Contact::count);
}

void		Contact::incCount(void)
{
	Contact::count++;
	return;
}

int		Contact::count = 0;
