/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:44:04 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/02 16:41:29 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

private:
	RobotomyRequestForm(void);

public:
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	virtual ~RobotomyRequestForm(void);

	virtual void	  execute(Bureaucrat const & executor) const;

	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
};

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & rhs);

#endif // ROBOTOMY_REQUEST_FORM_HPP
