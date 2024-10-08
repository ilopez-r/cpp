/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:02:04 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/05 20:28:37 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class Span
{
	private:
			unsigned int _N;
			
	public:
			std::vector<int> _container;
			Span (void);
			Span (long long int N);
			Span (const Span& copy);
			Span& operator=(const Span& other);
			~Span (void);
			void addNumber(int i);
			class AddNumberException: public std::exception
			{
				public:
						const char	*what() const throw();
			};
			int shortestSpan();
			int longestSpan();
			class SpanException: public std::exception
			{
				public:
						const char	*what() const throw();
			};
			void addManyNumbers(std::vector<int>::iterator b, std::vector<int>::iterator e);
};