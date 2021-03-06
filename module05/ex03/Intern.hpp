/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:17:51 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/12 09:03:48 by julnolle         ###   ########.fr       */
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
		virtual const char* what() const throw();
	};

};

#endif // INTERN_HPP
