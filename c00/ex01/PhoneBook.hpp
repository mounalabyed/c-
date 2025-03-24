/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabyed <mlabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:47:10 by mlabyed           #+#    #+#             */
/*   Updated: 2025/03/24 15:00:34 by mlabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <sstream>
#include <cstdlib>
#include<iostream>
#include"Contact.hpp"

class PhoneBook{
private:
    Contact phonbookk[8];
    int contact_num;
public :
     PhoneBook();
     void add();
     void search();

};
#endif