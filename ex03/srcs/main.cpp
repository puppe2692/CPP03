/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:59:22 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/21 11:03:08 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diams1;
	DiamondTrap diams2("Roberte");
	DiamondTrap diams3("Germaine");
	DiamondTrap diams4(diams3);
	int i = 0;

	std::cout << "------------------Value test------------------" << std::endl;
	std::cout << "Name : " << diams2.getName() << std::endl;
	std::cout << "Hit Points : " << diams2.getHitPoints() << std::endl;
	std::cout << "Energy Points : " << diams2.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage : " << diams2.getAttackDamage() << std::endl;
	std::cout << "Name Diams3: " << diams3.DiamondTrap::getName() << std::endl;
	std::cout << "Name Diams4: " << diams4.getName() << std::endl;

	std::cout << "------------------Diams------------------" << std::endl;

	while (i < 10)
	{
		diams1.attack("Germaine");
		diams3.takeDamage(1);
		i++;
	}
	diams2.attack("Germaine");
	diams3.takeDamage(1);
	diams3.attack("Alain");
	diams3.beRepaired(1);
	diams1.attack("Germaine");
	diams2.attack("Roberte");
	diams2.takeDamage(1);
	std::cout << "Roberte energy :" << diams2.getEnergyPoints() << std::endl;
	std::cout << "Roberte hitpoints :" << diams2.getHitPoints() << std::endl;
	diams2.beRepaired(1);
	std::cout << "Roberte energy :" << diams2.getEnergyPoints() << std::endl;
	std::cout << "Roberte hitpoints :" << diams2.getHitPoints() << std::endl;
	diams2.whoAmI();
	diams2.highFivesGuys();
	diams2.guardGate();
}