/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:02:00 by uasci             #+#    #+#             */
/*   Updated: 2024/01/31 18:13:16 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    ScavTrap scav("scav");
    scav.attack("targ");
    scav.takeDamage(2);
    scav.beRepaired(12);
    scav.guardGate();
    scav.guardGate();
}
