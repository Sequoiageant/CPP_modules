#include "PhoneBook.hpp"
#include "Contact.hpp"

int		add_contact(Contact PhoneBook[MAX_CONTACT])
{
	int	count = Contact::getCount();

	if (count > MAX_CONTACT - 1)
		return (FAILURE);
	PhoneBook[count].setContact();
	Contact::incCount();
	return (SUCCESS);
}

void	select_contact(Contact PhoneBook[MAX_CONTACT])
{
	std::string tmp;
	int			index;

	std::cout << "Enter the contact index you want info: ";
	std::getline(std::cin, tmp);
	index = atoi(tmp.c_str());
	if (isdigit(tmp[0]) && index >= 0 && index < Contact::getCount())
		PhoneBook[index].printContact();
	else
	{
		std::cout << "the index " << tmp << " does not exist."<< std::endl;
		select_contact(PhoneBook);
	}
}

int		search_contact(Contact PhoneBook[MAX_CONTACT])
{
	int		i;
	int		count = Contact::getCount();
	Contact	tmp;

	if (count == 0)
		return (FAILURE);

	std::cout << std::setw(10) << "index"
	<< " | " << std::setw(10) << "first name"
	<< " | " << std::setw(10) << "last name"
	<< " | " << std::setw(10) << "nickname"
	<< std::endl;
	i = 0;
	while (i < count)
	{
		tmp = PhoneBook[i];
		tmp.printPreview(i);
		i++;
	}
	select_contact(PhoneBook);
	return (SUCCESS);
}

void	read_input()
{
	std::string		cmd;
	static Contact	PhoneBook[MAX_CONTACT];

	std::cout << "Please, enter a command (ADD, SEARCH, EXIT): ";
	std::cin >> cmd;
	std::cin.ignore();
	if (cmd == "ADD")
	{
		std::cout << "To add a contact, you need to fill some information: " << cmd << std::endl;
		if (add_contact(PhoneBook) == FAILURE)
			std::cout << "The PhoneBook can't take more than " << MAX_CONTACT << " contacts" << std::endl;
	}
	else if (cmd.compare("SEARCH") == 0)
	{
		std::cout << "Here is the PhoneBook content:" << std::endl;
		if (search_contact(PhoneBook) == FAILURE)
			std::cout << "The PhoneBook is empty, please ADD contacts." << std::endl;
	}
	else if (cmd.compare("EXIT") == 0)
	{
		std::cout << "PhoneBook exited, all contacts are lost." << std::endl;
		return ;
	}
	else
		std::cout << "Wrong command: " << cmd << std::endl;
	read_input();
}

int main ()
{
	read_input();
	return (0);
}