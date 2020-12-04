/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 08:47:38 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/04 10:41:52 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRAL_BUREAUCRACY_HPP
# define CENTRAL_BUREAUCRACY_HPP

# include <string>
# include <iostream>
# include "OfficeBlock.hpp"

class CentralBureaucracy {

private:
	typedef struct		s_target
	{
		std::string const	name;
		struct s_target		*next;
	}					t_target;

	OfficeBlock*	_block[20];
	t_target*		_targets;

public:
	CentralBureaucracy(void);
	CentralBureaucracy(CentralBureaucracy const & copy);
	~CentralBureaucracy(void);

	CentralBureaucracy & operator=(CentralBureaucracy const & rhs);

	void queueUp(std::string const & target); // A queue (list) of targets (FIFO)
	void doBureaucracy(void) const; // Take the firts target in _targets and doBureaucracy with random OfficeBlock
	void buildBlock(Bureaucrat *); // Creates an OfficeBlock with intern and one bureaucrat (who signs & exec)
	// if all block ar full, the bureaucrat is rejected (deleted ?)
};

std::ostream & operator<<(std::ostream & o, CentralBureaucracy const & rhs);

#endif // CENTRAL_BUREAUCRACY_HPP
