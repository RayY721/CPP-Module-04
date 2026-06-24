/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:23:23 by kuyu              #+#    #+#             */
/*   Updated: 2026/06/24 16:23:24 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
class AAnimal
{
	protected:
		std::string type;

	public:
			AAnimal();
			AAnimal(const AAnimal& other);
			AAnimal& operator=(const AAnimal& other);
			virtual ~AAnimal();

			std::string 	getType() const;
			virtual void	makeSound() const = 0;
};

#endif
