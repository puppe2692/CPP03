/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:19:06 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/16 18:36:23 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap Nicolas;
	ClapTrap Antonin("Antonin");
	ClapTrap William("William");
	int i = 0;

	while (i < 10)
	{
		Nicolas.attack("William");
		William.takeDamage(1);
		i++;
	}
	Antonin.attack("William");
	William.takeDamage(1);
	William.attack("Nicolas");
	William.beRepaired(1);
	Nicolas.attack("William");
	Antonin.attack("Antonin");
	Antonin.takeDamage(1);
	std::cout << "Antonin energy :" << Antonin.getEnergyPoints() << std::endl;
	std::cout << "Antonin hitpoints :" << Antonin.getHitPoints() << std::endl;
	Antonin.beRepaired(1);
	std::cout << "Antonin energy :" << Antonin.getEnergyPoints() << std::endl;
	std::cout << "Antonin hitpoints :" << Antonin.getHitPoints() << std::endl;
}