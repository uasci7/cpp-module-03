/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:00:58 by uasci             #+#    #+#             */
/*   Updated: 2024/01/31 18:21:12 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main () {
    FragTrap frag;
    frag.attack("targ");
    frag.takeDamage(30);
    frag.beRepaired(10);
    frag.highFivesGuys();
}
