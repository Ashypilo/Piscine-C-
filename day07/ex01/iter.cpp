/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:10:47 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/10 17:25:12 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void f_out(T& arr)
{
    arr += 1;
}

template <typename T>
void iter(T* arr, int size, void (*f)(T&))
{
    for (int i = 0; i < size; i++)
        f(arr[i]);
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    iter(arr, 10, f_out);
    for (int i = 0; i < 10; i++)
        std::cout << (arr[i]) << " ";
    std::cout << std::endl;

    char arr1[] = "asdfghhjhj";
    iter(arr1, 10, f_out);
    for (int i = 0; i < 10; i++)
        std::cout << (arr1[i]) << " ";
    std::cout << std::endl;
    return (0);
}