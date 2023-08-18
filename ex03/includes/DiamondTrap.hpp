/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:23:54 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/18 18:00:37 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

//class derivee
class DiamondTrap : public ScavTrap, public FragTrap
{
	public :

		DiamondTrap(void);
		DiamondTrap(std::string Name);
		DiamondTrap(DiamondTrap& Other);

		~DiamondTrap(void);
		DiamondTrap& 	operator=(DiamondTrap& other);

		void whoAmI();
		using ScavTrap::attack;

	private :

		std::string _Name;

};

#endif