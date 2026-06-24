/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:22:26 by kuyu              #+#    #+#             */
/*   Updated: 2026/06/24 16:22:27 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
class Animal
{
	protected:
		std::string type;

	public:
			Animal();
			Animal(const Animal& other);
			Animal& operator=(const Animal& other);
			virtual ~Animal();

			std::string 	getType() const;
			virtual void	makeSound() const;
};

#endif
