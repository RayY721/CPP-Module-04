/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:24:29 by kuyu              #+#    #+#             */
/*   Updated: 2026/06/24 16:24:30 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const& other);
        Cure& operator=(Cure const& other);
        virtual	~Cure();

        virtual	AMateria*   clone() const;
        virtual	void		use(ICharacter& target);
};

#endif