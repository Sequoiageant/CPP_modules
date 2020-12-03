/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:29:43 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/02 11:25:26 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form {

private:
	std::string	const	_name;
	bool				_ratified;
	int			const	_signGrade;
	int			const	_execGrade;
	Form(void);

public:
	Form(std::string name, int signGrade, int execGrade);
	Form(Form const & copy);
	~Form(void);

	std::string	const getName(void) const;
	bool			  getRatification(void) const;
	int				  getSignGrade(void) const;
	int				  getExecGrade(void) const;

	void			  beSigned(Bureaucrat const &);

	Form & operator=(Form const & rhs);

	class GradeTooHighException : public std::exception {

	public:
		virtual const char* what() const throw()
		{
			return ("grade is too high !");
		}
	};

	class GradeTooLowException : public std::exception {

	public:
		virtual const char* what() const throw()
		{
			return ("grade is too low !");
		}
	};
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif // FORM_HPP
