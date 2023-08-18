/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:40:21 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/18 11:15:49 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

//class derivee
class ScavTrap : public ClapTrap
{
	public :

		ScavTrap(void);
		ScavTrap(std::string Name);
		ScavTrap(ScavTrap& Other);

		~ScavTrap(void);
		ScavTrap& 	operator=(ScavTrap& other);

	void guardGate();
	void attack(const std::string& target);

};

#endif