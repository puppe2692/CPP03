/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:32:17 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/18 17:24:54 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :  ScavTrap("Alain"), FragTrap("Alain") 
{
	std::cout << "DiamondTrap Default Constructor Called" << std::endl;

	_Name = "Alain";
	FragTrap::_HitPoints;
	ScavTrap::_EnergyPoints;
	FragTrap::_AttackDamage;
	return;
}

DiamondTrap::DiamondTrap(std::string Name) :  ScavTrap(Name), FragTrap(Name) // ClapTrap(Name)
{
	std::cout << "DiamondTrap Parameter Constructor Called" << std::endl;

	this->ClapTrap::_Name = Name + "_clap_name";

	this->_Name = Name; // ici
	FragTrap::_HitPoints;
	ScavTrap::_EnergyPoints;
	FragTrap::_AttackDamage;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap& Other)
{
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;

	*this = Other;
	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
	return;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other)
{
	std::cout << "DiamondTrap = operator Called" << std::endl;
	this->_AttackDamage = other.FragTrap::getAttackDamage();
	this->_EnergyPoints = other.ScavTrap::getEnergyPoints();
	this->_HitPoints = other.FragTrap::getHitPoints();
	this->_Name = other.DiamondTrap::getName();
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm DiamondTrap, but am I " << this->_Name << " or " << this->ClapTrap::_Name << " ?" << std::endl;
	return;
}