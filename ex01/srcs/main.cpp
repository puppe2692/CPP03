/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:19:06 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/16 19:17:15 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main(void)
{
	ScavTrap couillon;
	ScavTrap Antonin("Antonin");
	ScavTrap William("William");
	int i = 0;

	while (i < 10)
	{
		couillon.attack("William");
		William.takeDamage(1);
		i++;
	}
	Antonin.attack("William");
	William.takeDamage(1);
	William.attack("Nicolas");
	William.beRepaired(1);
	couillon.attack("William");
	Antonin.attack("Antonin");
	Antonin.takeDamage(1);
	std::cout << "Antonin energy :" << Antonin.getEnergyPoints() << std::endl;
	std::cout << "Antonin hitpoints :" << Antonin.getHitPoints() << std::endl;
	Antonin.beRepaired(1);
	std::cout << "Antonin energy :" << Antonin.getEnergyPoints() << std::endl;
	std::cout << "Antonin hitpoints :" << Antonin.getHitPoints() << std::endl;
	Antonin.guardGate();
}