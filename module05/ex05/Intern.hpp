/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:17:51 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 18:58:23 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

private:
	AForm* _fillPardonForm(std::string const & target) const;
	AForm* _fillRequestForm(std::string const & target) const;
	AForm* _fillShrubbery(std::string const & target) const;

public:
	Intern(void);
	Intern(Intern const & copy);
	~Intern(void);

	Intern & operator=(Intern const & rhs);

	AForm* makeForm(std::string const & type, std::string const & target) const;

	class FormNotFound : public std::exception {

	public:
		virtual const char* what() const throw()
		{
			return ("This intern is a noob, doesn't know this form !");
		}
	};
};

#endif // INTERN_HPP
