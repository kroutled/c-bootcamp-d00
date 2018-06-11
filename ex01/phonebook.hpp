/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:41:40 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/05 16:06:28 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class contact {

public:
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string		login;
	std::string		postalAddress;
	std::string		phoneNumber;
	std::string		birthdayDate;
	std::string		favouriteMeal;
	std::string		underwearColor;
	std::string		darkestSecret;

};

#endif
