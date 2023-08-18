/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:58:52 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/18 11:16:48 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;

	_Name = "John";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	return;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap Parameter Constructor Called" << std::endl;

	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap& Other)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;

	*this = Other;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	std::cout << "ScavTrap = operator Called" << std::endl;
	this->_AttackDamage = other.getAttackDamage();
	this->_EnergyPoints = other.getEnergyPoints();
	this->_HitPoints = other.getHitPoints();
	this->_Name = other.getName();
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_Name << " is in gate keeper" << std::endl;
	return;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_Name << " is as lazy as his mother, he can't attack" << std::endl;
}