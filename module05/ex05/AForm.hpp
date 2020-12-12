/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:29:43 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/11 20:29:29 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class AForm {

private:
	AForm(void);
	std::string	const	_name;
	bool				_ratified;
	int			const	_signGrade;
	int			const	_execGrade;
	std::string	const	_target;

public:
	AForm(std::string const & name, int signGrade, int execGrade, std::string const & target);
	AForm(AForm const & copy);
	virtual ~AForm(void);

	std::string	const getName(void) const;
	bool			  getRatification(void) const;
	int				  getSignGrade(void) const;
	int				  getExecGrade(void) const;
	std::string	const getTarget(void) const;

	void			  beSigned(Bureaucrat const &);
	virtual void	  execute(Bureaucrat const & executor) const = 0;

	AForm & operator=(AForm const & rhs);

	class GradeTooHighException : public std::exception {

	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {

	public:
		virtual const char* what() const throw();
	};

	class FormNotSignedException : public std::exception {

	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif // FORM_HPP
