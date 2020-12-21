/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:22:13 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/21 15:34:01 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void ft_switch(T & s)
{
	std::size_t pos = 0;

    while ((pos = s.find('r')) != T::npos)
    {
        s.replace(pos, 1, "~");
    }
}

template<typename T>
void ft_increment(T & elem)
{
	elem++;
}

template<typename T>
void ft_print(T const & elem)
{
	std::cout << elem << " ";
}

template<typename T>
void	iter(T *tab, int size, void f(T &))
{
	for (int i = 0; i < size; ++i)
	{
		f(tab[i]);
	}
}

template<typename T>
void	iter(T *tab, int size, void f(T const &))
{
	for (int i = 0; i < size; ++i)
	{
		f(tab[i]);
	}
}

#endif // ITER_HPP
