/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:10:47 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:30:11 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    public:
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle&);
    ~PlasmaRifle();

    PlasmaRifle& operator=(const PlasmaRifle &over);

    void attack() const;
};

#endif