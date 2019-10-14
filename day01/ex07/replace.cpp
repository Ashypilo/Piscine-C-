/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:06:15 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:30:20 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::string str1 = argv[2];
    std::string str2 = argv[3];
    std::string line;
    std::string out;
    std::string file_name = argv[1];
    file_name += ".replace";

    if (argc == 4 && !(str1 == str2))
    {
        std::ifstream myfile(argv[1]);
        std::ofstream outfile(file_name);
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {   
                if (!myfile.eof())
                    out += line + '\n';
                else
                    out += line;
            }
            myfile.close();
        }
            while (out.find(argv[2]) != std::string::npos)
                out.replace(out.find(argv[2]), strlen(argv[2]), argv[3]);
            std::cout << out << std::endl;
    
            if (outfile.is_open())
                outfile << out;
    }
    else 
        std::cout << "Error" << std::endl;
    return (0);
}