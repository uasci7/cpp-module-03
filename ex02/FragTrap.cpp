/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:01:12 by uasci             #+#    #+#             */
/*   Updated: 2024/01/31 18:20:23 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    energyPoints = 100;
    attackDamage = 30;
    name = "nameless";
    gate = 0;
	std::cout << "[FragTrap] default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &CopiedBy) {
	this->hitPoints= CopiedBy.hitPoints;
    this->energyPoints = CopiedBy.energyPoints;
    this->attackDamage = 30;
    this->gate = 0;
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& CopiedBy) {
	if (this != &CopiedBy) {
        this->hitPoints= CopiedBy.hitPoints;
        this->energyPoints = CopiedBy.energyPoints;
    }
	std::cout << "[FragTrap] Copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "[FragTrap] destructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name) {
    this->name = _name;
    energyPoints = 100;
    attackDamage = 30;
    gate = 0;
    std::cout << "[FragTrap] constructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "[FragTrap] No energy or hit points left" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "FragTrap " << name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints == 0) {
        std::cout << "[FragTrap] No hit points left." << std::endl;
        return;
    }
    if (this->hitPoints > amount) {
        this->hitPoints -= amount;
        std::cout << "FragTrap " << name << " takes damage and loses " << amount << " points of hit points. (Total : " << this->hitPoints << ")" << std::endl;
    }
    else if (this->hitPoints <= amount) {
        this->hitPoints = 0;
        std::cout << "FragTrap " << name << " is dead." << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "[FragTrap] No energy or hit points left." << std::endl;
        return;
    }
    this->hitPoints += amount;
    this->energyPoints--;

    std::cout << "FragTrap " << name << " repairs itself and gets " << amount << " point of hit points." << std::endl;
}

void FragTrap::guardGate() {
    if (this->gate == 0)
    {
        gate = 1;
        std::cout << "FragTrap is now in Gate keeper mode." << std::endl;
    }
    else if (this->gate == 1)
        std::cout << "Gate is already guarded!!" << std::endl;
}
void FragTrap::highFivesGuys() {
    std::cout << "Can I get some positive high fives?" << std::endl;
}
