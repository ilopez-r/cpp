/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:17:10 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 11:59:45 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap:virtual public ClapTrap
{
	protected:
			static const int _energy = 50;
	public:
			ScavTrap (void);
			ScavTrap(std::string name);
			ScavTrap (const ScavTrap& copy);
			ScavTrap& operator=(const ScavTrap& other);
			~ScavTrap (void);
			void attack(const std::string& target);
			void guardGate(void);
};
