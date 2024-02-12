/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:00:10 by uasci             #+#    #+#             */
/*   Updated: 2024/01/31 18:00:20 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    gate = 0;
	std::cout << "[ScavTrap] default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &CopiedBy) {
	this->hitPoints= CopiedBy.hitPoints;
    this->energyPoints = CopiedBy.energyPoints;
    this->attackDamage = 20;
    this->gate = 0;
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& CopiedBy) {
	if (this != &CopiedBy) {
        this->hitPoints= CopiedBy.hitPoints;
        this->energyPoints = CopiedBy.energyPoints;
    }
	std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) {
    this->name = _name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    gate = 0;
    std::cout << "[ScavTrap] constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "[ScavTrap] No energy or hit points left" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints == 0) {
        std::cout << "[ScavTrap] No hit points left." << std::endl;
        return;
    }
    if (this->hitPoints > amount) {
        this->hitPoints -= amount;
        std::cout << "ScavTrap " << name << " takes damage and loses " << amount << " points of hit points." << std::endl;
    }
    else if (this->hitPoints <= amount) {
        this->hitPoints = 0;
        std::cout << "ScavTrap " << name << " is dead." << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "[ScavTrap] No energy or hit points left." << std::endl;
        return;
    }
    this->hitPoints += amount;
    this->energyPoints--;

    std::cout << "ScavTrap " << name << " repairs itself and gets " << amount << " point of hit points." << std::endl;
}

void ScavTrap::guardGate() {
    if (this->gate == 0)
    {
        gate = 1;
        std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
    }
    else if (this->gate == 1)
        std::cout << "Gate is already guarded!!" << std::endl;
}
