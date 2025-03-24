/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabyed <mlabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:46:29 by mlabyed           #+#    #+#             */
/*   Updated: 2025/03/24 14:57:20 by mlabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include"Contact.hpp"
#include<iostream>

int main() {
    
    PhoneBook phon;
    std::string commande;
    while (1) {
        if(std::cin.eof())
            return 1;
        std::cout << "Entrer commande 'ADD' 'SEARCH' 'EXIT': \n";
        std::getline(std::cin, commande);
        if(std::cin.eof())
             return (1);
        if(commande == "ADD")
        {
            phon.add();
            continue;
        }
        if(commande == "SEARCH")
        {
            phon.search();
            continue;
        }
        if(commande == "EXIT")
            return 1;
        else {
            std::cout << "invalide commande : \n";
            continue;
        }
 
    }
    return 0;
}