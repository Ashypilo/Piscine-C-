/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:12:28 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 11:24:26 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
#define MAX 20

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    public:
    Squad();
    Squad(const Squad &src);
    ~Squad();
    
    Squad& operator=(const Squad &over);
    
    virtual int push(ISpaceMarine *marine);
    virtual int getCount(void) const;
    virtual ISpaceMarine *getUnit(int n) const;

    private:
    int unit;
    ISpaceMarine *marine[MAX];

};

#endif