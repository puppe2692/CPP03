/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:36:06 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/18 13:48:01 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;

	_Name = "Franck";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	return;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "FragTrap Parameter Constructor Called" << std::endl;

	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	return;
}

FragTrap::FragTrap(FragTrap& Other)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;

	*this = Other;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor Called" << std::endl;
	return;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	std::cout << "FragTrap = operator Called" << std::endl;
	this->_AttackDamage = other.getAttackDamage();
	this->_EnergyPoints = other.getEnergyPoints();
	this->_HitPoints = other.getHitPoints();
	this->_Name = other.getName();
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " High Five guys?... Please guys..." << std::endl;
	return;
}