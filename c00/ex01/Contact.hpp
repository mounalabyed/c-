/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabyed <mlabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:46:58 by mlabyed           #+#    #+#             */
/*   Updated: 2025/03/24 14:57:02 by mlabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <cstdlib>
#include<iostream>

class Contact{
private :std::string first_name , last_name, nickname, phon, darkest_secret;
public:
    void contacteset();
    std::string getFirstName();
    std::string getlastName();
    std::string getnickName();
    void display() const;
};

#endif