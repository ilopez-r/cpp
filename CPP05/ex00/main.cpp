/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:06:02 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/26 13:48:54 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat *e = NULL;
	try
	{
		Bureaucrat a("Bureaucrat1", 100);
		Bureaucrat b("Bureaucrat2", 1);
		Bureaucrat c;
		Bureaucrat d(b);
		e = new Bureaucrat(a);
		std::cout << "a: " << a << "\n";
		std::cout << "b: " << b << "\n";
		std::cout << "c: " << c << "\n";
		d.decrement_grade();
		std::cout << "d: " << d << "\n";
		e->increment_grade();
		std::cout << "e: " << *e << "\n";
		while (a.getGrade() <= 151)
		{
			a.decrement_grade();
			std::cout << "a: " << a << "\n";
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	delete e;
}
