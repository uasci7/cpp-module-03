/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:01:03 by uasci             #+#    #+#             */
/*   Updated: 2024/01/31 18:20:56 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ScavTrap  {
    public:
        FragTrap();
        FragTrap(const FragTrap &a);
        FragTrap &operator=(const FragTrap &CopiedBy);
        ~FragTrap();
        FragTrap(std::string _name);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
        void highFivesGuys(); 

};

#endif
