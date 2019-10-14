/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:40:55 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/10 18:48:05 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
    int i = rand() % 3;

    if (i == 1)
        return (new A());
    else if (i == 2)
        return (new B());
    else
        return (new C()); 
}

void identify_from_pointer(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << 'A' << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << 'B' << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << 'C' << std::endl;

}

void identify_from_reference(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << 'A' << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << 'B' << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << 'C' << std::endl;
}

int main()
{
    srand(time(0));
    Base *out = generate();

    identify_from_pointer(out);
    identify_from_reference(*out);
    return (0);
}