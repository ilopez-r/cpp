/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:42:33 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/10/01 16:55:30 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cstdlib>


class BitcoinExchange
{
	private:
		std::map<std::string, double> _btc;
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string &database, const std::string &inputFile);
		BitcoinExchange(const BitcoinExchange & copy);
		~BitcoinExchange();
		BitcoinExchange & operator=(const BitcoinExchange & other);
		void extractInputFile(std::ifstream &fileStream);
		void extractDbFile(std::ifstream &dbStream);
};