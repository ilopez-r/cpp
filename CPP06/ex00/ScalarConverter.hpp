/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:50:05 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 18:46:32 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cstdlib>

class ScalarConverter
{
	private:
			ScalarConverter (void);
			ScalarConverter (const ScalarConverter& copy);
			ScalarConverter& operator=(const ScalarConverter& other);
	public:
			~ScalarConverter (void);
			static void convert(std::string str);
};
