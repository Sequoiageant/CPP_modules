/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:44:04 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/02 15:01:20 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

private:
	PresidentialPardonForm(void);

public:
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(PresidentialPardonForm const & copy);
	virtual ~PresidentialPardonForm(void);

	virtual void	  execute(Bureaucrat const & executor) const;

	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
};

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & rhs);

#endif // PRESIDENTIAL_PARDON_FORM_HPP
