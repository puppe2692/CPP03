/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:10:44 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/16 18:33:33 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;

	_Name = "Nicolas";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	return;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name)
{
	std::cout << "ClapTrap Parameter Constructor Called" << std::endl;

	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	return;
}

ClapTrap::ClapTrap(ClapTrap& Other)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;

	*this = Other;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
	return;
}


ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
	std::cout << "ClapTrap = operator Called" << std::endl;
	this->_AttackDamage = other.getAttackDamage();
	this->_EnergyPoints = other.getEnergyPoints();
	this->_HitPoints = other.getHitPoints();
	this->_Name = other.getName();
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " is exhausted or dead, he can't attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " take " << amount << " of damage" << std::endl;
		this->_HitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " is already dead, leave him alone" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " repaired himself by " << amount << " hitpoints" << std::endl;
		this->_EnergyPoints--;
		this->_HitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " is exhausted or dead, this lazy bitch can't repair himself" << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return(this->_Name);
}

int	ClapTrap::getHitPoints(void)
{
	return(this->_HitPoints);
}

int	ClapTrap::getEnergyPoints(void)
{
	return(this->_EnergyPoints);
}

int	ClapTrap::getAttackDamage(void)
{
	return(this->_AttackDamage);
}