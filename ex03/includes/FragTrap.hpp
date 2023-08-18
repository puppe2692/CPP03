/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:36:02 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/18 17:55:21 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

//class derivee
class FragTrap : virtual public ClapTrap
{
	public :

		FragTrap(void);
		FragTrap(std::string Name);
		FragTrap(FragTrap& Other);

		~FragTrap(void);
		FragTrap& 	operator=(FragTrap& other);

		void highFivesGuys(void);

};

#endif