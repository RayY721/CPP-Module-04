/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:24:21 by kuyu              #+#    #+#             */
/*   Updated: 2026/06/24 16:24:22 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
		std::string	name;
		AMateria* inventory[4];

	public:
		Character();
		Character(std::string const& name);
		Character(Character const& other);
		Character& operator=(Character const& other);
		virtual	~Character();

		virtual	std::string const& getName() const;
		virtual	void	equip(AMateria* m);
		virtual	void	unequip(int idx);
		virtual	void	use(int idx, ICharacter& target);
};

#endif