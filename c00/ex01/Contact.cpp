/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabyed <mlabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:46:45 by mlabyed           #+#    #+#             */
/*   Updated: 2025/03/24 15:25:25 by mlabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Contact.hpp"

void Contact::contacteset(){
    while(1){
        std::cout <<"entrer first name\n";
       std:: getline(std::cin , first_name);
       if(std::cin.eof())
           exit(1);
        if(first_name.empty())
        {
            std::cout << "entre a valide name \n";
            continue;
        }
        else 
            break;
    }
    while(1){ 
        std::cout <<"entrer last name\n";
        std:: getline(std::cin , last_name);
        if(std::cin.eof())
           exit(1);
        if(last_name.empty())
        {
               std::cout << "entre a valide last name \n";
               continue;
        }
        else 
            break;
    }
    while(1){ 
        std::cout <<"entrer nickname\n";
        std:: getline(std::cin , nickname);
        if(std::cin.eof() )
            exit (1);
        if(nickname.empty())
            {
                std::cout << "entre a validenickname \n";
                continue;
            }
        else 
            break;
    }
    while(1){ 
        std::cout <<"entrer phon number\n";
        std::getline(std::cin , phon);
        if(std::cin.eof() )
            exit(1) ;
           size_t i = 0;
           int count = 0;
       while(i < phon.length())
       {
            if(isdigit(phon[i]) == 0)
            {
                count = 1;
                break;
            }
            i++;
       }
    if(count == 1)
    {
        std::cout << "entrer juste des chiffres \n"; 
        continue;
    }
    if(phon.empty())
    {
        std::cout << "entrer a valide number \n";
        continue;
    }
    else 
        break;
    }
    while(1){ 
    std::cout <<"entrer darkest secrete\n";
    std:: getline(std::cin , darkest_secret);
    if(std::cin.eof())
        exit(1);
    if(darkest_secret.empty())
    {
            std::cout << "entre a valide darkest secret \n";
            continue;
    }
        else 
            break;
    }
}

std::string Contact::getFirstName()  {
    if(first_name.size()> 10)
    {
        std::string rest = first_name;
        rest = rest.substr(0,10) + ".";
        return rest;
    }
    return first_name; 
    }
std::string Contact::getlastName() {
        if(last_name.size()> 10)
        {
            std::string rest =last_name;
            rest = rest.substr(0,10) + ".";
            return rest;
        }
        return last_name;
}
std::string Contact::getnickName() {
    if( nickname.size()> 10)
    {
        std::string rest = nickname;
        rest = rest.substr(0,10) + ".";
        return rest;
    }
    return  nickname;
}
 void Contact::display() const {
            std::cout << "First Name: " ;
            std::cout << first_name << std::endl;
            std::cout << "last Name: " ;
            std::cout << last_name << std::endl;
            std::cout << "nick Name: " ;
            std::cout << nickname << std::endl;
            std::cout << "phon number : " ;
            std::cout << phon << std::endl;
            std::cout << "darkest secret: " ;
            std::cout << darkest_secret << std::endl;
}