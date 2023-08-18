/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:19:06 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/18 13:55:54 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(void)
{
	ClapTrap clap1;
	ClapTrap clap2("Juliette");
	ClapTrap clap3("Alice");
	ClapTrap clap4(clap3);
	ScavTrap scav1;
	ScavTrap scav2("Antonin");
	ScavTrap scav3("William");
	ScavTrap scav4(scav3);
	FragTrap frag1;
	FragTrap frag2("Therese");
	FragTrap frag3("Marie");
	FragTrap frag4(frag3);
	int i = 0;
	int j = 0;
	int k = 0;

	std::cout << "------------------Clap------------------" << std::endl;

	while (j < 10)
	{
		clap1.attack("Alice");
		clap3.takeDamage(1);
		j++;
	}
	clap2.attack("Alice");
	clap3.takeDamage(1);
	
	clap3.attack("Nicolas");
	clap3.beRepaired(1);
	clap1.attack("Alice");
	clap2.attack("Juliette");
	clap2.takeDamage(1);
	std::cout << "Juliette energy :" << clap2.getEnergyPoints() << std::endl;
	std::cout << "Juliette hitpoints :" << clap2.getHitPoints() << std::endl;
	clap2.beRepaired(1);
	std::cout << "Juliette energy :" << clap2.getEnergyPoints() << std::endl;
	std::cout << "Juliette hitpoints :" << clap2.getHitPoints() << std::endl;

	std::cout << "------------------Scav------------------" << std::endl;

	while (i < 10)
	{
		scav1.attack("William");
		scav3.takeDamage(1);
		i++;
	}
	scav2.attack("William");
	scav3.takeDamage(1);
	scav3.attack("John");
	scav3.beRepaired(1);
	scav1.attack("William");
	scav2.attack("Antonin");
	scav2.takeDamage(1);
	std::cout << "Antonin energy :" << scav2.getEnergyPoints() << std::endl;
	std::cout << "Antonin hitpoints :" << scav2.getHitPoints() << std::endl;
	scav2.beRepaired(1);
	std::cout << "Antonin energy :" << scav2.getEnergyPoints() << std::endl;
	std::cout << "Antonin hitpoints :" << scav2.getHitPoints() << std::endl;
	scav2.guardGate();

	std::cout << "------------------Frag------------------" << std::endl;

	while (k < 10)
	{
		frag1.attack("Marie");
		frag3.takeDamage(1);
		k++;
	}
	frag2.attack("Marie");
	frag3.takeDamage(1);
	frag3.attack("Franck");
	frag3.beRepaired(1);
	frag1.attack("Marie");
	frag2.attack("Therese");
	frag2.takeDamage(1);
	std::cout << "Therese energy :" << frag2.getEnergyPoints() << std::endl;
	std::cout << "Therese hitpoints :" << frag2.getHitPoints() << std::endl;
	frag2.beRepaired(1);
	std::cout << "Therese energy :" << frag2.getEnergyPoints() << std::endl;
	std::cout << "Therese hitpoints :" << frag2.getHitPoints() << std::endl;
	frag2.highFivesGuys();

	std::cout << "------------------Clap------------------" << std::endl;

	clap4.attack("Nicolas");
	clap4.beRepaired(1);

	std::cout << "------------------Scav------------------" << std::endl;

	scav4.attack("John");
	scav4.beRepaired(1);

	std::cout << "------------------Frag------------------" << std::endl;

	frag4.attack("Franck");
	frag4.beRepaired(1);

}