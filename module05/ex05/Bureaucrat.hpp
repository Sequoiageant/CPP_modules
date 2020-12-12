/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:34:46 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/12 08:51:40 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class AForm;

class Bureaucrat {

private:
	std::string	const	_name;
	int					_grade; // 1 to 150
	Bureaucrat(void);

public:
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const & copy);
	~Bureaucrat(void);

	Bureaucrat & operator=(Bureaucrat const & rhs);

	std::string const	getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);

	void				signForm(AForm &);
	void	 			executeForm(AForm const & form) const;
	
	class GradeTooHighException : public std::exception {

	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {

	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif // BUREAUCRAT_HPP
