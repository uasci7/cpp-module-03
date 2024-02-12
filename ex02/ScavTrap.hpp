/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:00:40 by uasci             #+#    #+#             */
/*   Updated: 2024/01/31 18:00:42 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    protected:
        bool gate;
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &a);
        ScavTrap &operator=(const ScavTrap &CopiedBy);
        ~ScavTrap();
        ScavTrap(std::string _name);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
};

#endif
