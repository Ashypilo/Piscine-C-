/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 14:26:06 by ashypilo          #+#    #+#             */
/*   Updated: 2019/09/30 15:13:49 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void megaphone(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int j = 1; j < argc; j++)
    {
        for (int i = 0; argv[j][i] != 0; i++)
            std::cout << (char)toupper(argv[j][i]);
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    megaphone(argc, argv);
    return (0);
}