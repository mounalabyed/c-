/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabyed <mlabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:49:55 by mlabyed           #+#    #+#             */
/*   Updated: 2025/03/24 15:16:09 by mlabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    contact_num = 0;
}
void PhoneBook::add()
{
        if (contact_num < 8 ) {
            phonbookk[contact_num].contacteset();
            contact_num++;
        }
      else
          phonbookk[contact_num - 8].contacteset();
}

void PhoneBook::search()
{
        if(std::cin.eof())
        {
            std::cout << "signal detecter \n";
            exit(1);
        }
        int i =0;
        int j = contact_num;
        if (contact_num == 0) {
            std::cout << "Aucun contact enregistré." << std::endl;
            return;
        }
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "| Index | First Name | Last Name  | Nickname  |" << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        while(i < j){
            std::cout << "| " << i << "     | " 
                      << phonbookk[i].getFirstName() << " | " 
                      << phonbookk[i].getlastName() << " | "
                      << phonbookk[i].getnickName() << " |" << std::endl;
                      i++;
        }
        while(1)
        { 
        std::cout << "entrer index : ";
        std::string index;
        i = 0;
        int count = 0;
        std::getline(std::cin, index);
        while((size_t)i < index.length())
        {
            if(isdigit(index[i]) == 0)
            {
                count = 1;
                break;
            }
            i++;
        }
        if((count == 1 || index.empty()) &&   !(std::cin.eof()))
        {
            std::cout << "index doit contenir uniquement des chiffres\n";
            continue ;
        }
        std::stringstream c(index);
        int nbr = 0;
        c >> nbr; 
        // if( !(c >> nbr) || !c.eof )
        // {
        //     std::cout << "enter a valide index \n";
        // }
        if(nbr >= 0 && nbr < contact_num &&  !(std::cin.eof()))
        {
           phonbookk[nbr].display();
            break;
        }
        if(std::cin.eof())
        {
            std::cout << "signal detecter \n";
            exit(1);
        }
        else {
            std::cout << "invalide index\n ";
            continue;
        }
        }
}



