/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:47:42 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/03 18:35:10 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_BLOCK_HPP
# define OFFICE_BLOCK_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"
# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock {

private:
	Intern*		_intern;
	Bureaucrat* _signatory;
	Bureaucrat* _executor;
	AForm*		_form;
	OfficeBlock(OfficeBlock const & copy);
	OfficeBlock & operator=(OfficeBlock const & rhs);

public:
	OfficeBlock(void);
	OfficeBlock(Intern *, Bureaucrat* signatory, Bureaucrat* executor);
	~OfficeBlock(void);

	void setIntern(Intern *);
	void setSignatory(Bureaucrat *);
	void setExecutor(Bureaucrat *);

	void doBureaucracy(std::string const & type, std::string const & target);

	class NullPointerException : public std::exception {

	private:
		std::string _msg;
	public:
		NullPointerException(std::string const name);
		virtual ~NullPointerException() throw() {};
		virtual const char* what() const throw();
	};
};

#endif // OFFICE_BLOCK_HPP
