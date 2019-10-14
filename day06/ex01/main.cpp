/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:30:43 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/10 18:43:03 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iomanip>

void *serialize()
{
    char *data = new char[20];
    char rand_string[] = {"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    
    int num = rand(); 
    char *tmp = reinterpret_cast<char*>(&num);
    for (int i = 0; i < 8; i++)
    {
        data[i] = rand_string[rand() % 61];
        std::cout << data[i];
    }
    for (int i = 8, j = 0; i < 12; i++, j++)
        data[i] = tmp[j];
    std::cout << std::endl;
    std::cout << num;
    std::cout << std::endl;
    for (int i = 12; i < 20; i++)
    {
        data[i] = rand_string[rand() % 61];
        std::cout << data[i];
    }
    std::cout << std::endl;
    return (reinterpret_cast<void*>(data));
}

Data *deserialize(void *raw)
{
    Data *data = new Data;
    char *copy = reinterpret_cast<char*>(raw);
    data->s1 = "00000000\0";
    data->s2 = "00000000\0";

    for (int i = 0; i < 8; i++)
        data->s1[i] = copy[i];
    data->n = (reinterpret_cast<int*>(copy + 8))[0];
    for (int i = 12; i < 20; i++)
        data->s2[i - 12] = copy[i];
    return (data);
}

int main()
{
    std::srand(std::time(0));
    void *data;
    Data *data_struct;
    
    std::cout << "Serialize:" << std::endl;
    data = serialize();
    data_struct = deserialize(data);
    std::cout << "Deserialize:" << std::endl;
    std::cout << data_struct->s1 << std::endl << data_struct->n << std::endl << data_struct->s2 << std::endl;

    delete [] reinterpret_cast<char*>(data);
    delete data_struct;
    return (0);
}