/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:44:04 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/02 16:49:08 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

private:
	ShrubberyCreationForm(void);
	std::string const _tree;

public:
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & copy);
	virtual ~ShrubberyCreationForm(void);

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
	std::string const getTree(void) const;

	virtual void	  execute(Bureaucrat const & executor) const;

};

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs);

#endif // SHRUBBERY_CREATION_FORM_HPP
