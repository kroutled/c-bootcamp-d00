/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:41:05 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/05 16:48:50 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	init(void)
{
	std::cout << "Commands:" << std::endl;
	std::cout << "ADD - Add info for new contact" << std::endl;
	std::cout << "SEARCH - Find a contact" << std::endl;
	std::cout << "EXIT - Exits the program" << std::endl;
}

std::string		getInput(std::string prompt)
{
	std::string input;
	std::cout << prompt;
	std::getline(std::cin, input);
	return input;
}


void	trunc(std::string str)
{
	char	buff[11];
	std::cout << std::setfill(' ') << std::setw(10);
	if (str.size() > 10)
	{
		str.copy(buff, 9, 0);
		buff[9] = '.';
		buff[10] = '\0';
		std::cout << buff;
	}
	else
		std::cout << str;
}

int		display(contact contact[8])
{
	int		i = 0;
	while (contact[i].firstName != "" && i < 8)
	{
		std::cout << "         " <<i + 1<<'|';
		trunc(contact[i].firstName);
		std::cout << '|';
		trunc(contact[i].lastName);
		std::cout << '|';
		trunc(contact[i].nickName);
		std::cout << '|' << std::endl;
		i++;
	}
	return (i);
}

void	details(int	index, contact contact[8])
{
	std::cout << "First name: " << contact[index].firstName << std::endl;
	std::cout << "Last name: " << contact[index].lastName << std::endl;
	std::cout << "Nick name: " << contact[index].nickName << std::endl;
	std::cout << "Login: " << contact[index].login << std::endl;
	std::cout << "Postal Address: " << contact[index].postalAddress << std::endl;
	std::cout << "Phone number: " << contact[index].phoneNumber << std::endl;
	std::cout << "Date of birth: " << contact[index].birthdayDate << std::endl;
	std::cout << "Fav meal: " << contact[index].favouriteMeal << std::endl;
	std::cout << "Color of underwear: " << contact[index].underwearColor << std::endl;
	std::cout << "Secret: " << contact[index].darkestSecret << std::endl;
}

int		main(void)
{
	int	numConts;
	contact contact[8];	
	std::string	input;
	std::string index;
	int tempnum =0;
	init();

	while (1)
	{
		input = getInput(">");
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
		{
			int	i = 0;
			std::cout << "Enter details: " << std::endl;

			while (contact[i].firstName != "" && i < 8)
				i++;
			if (i >= 8)
				std::cout << "Max of 8 contacts met!" << std::endl;
			else
			{
				contact[i].firstName = getInput("First name: ");
				if (contact[i].firstName == "")
				{
					while (contact[i].firstName == "")
						contact[i].firstName = getInput("First name: ");
				}
				contact[i].lastName = getInput("Last name: ");
				contact[i].nickName = getInput("Nick name: ");
				contact[i].login = getInput("Login: ");
				contact[i].postalAddress = getInput("Postal Adress: ");
				contact[i].phoneNumber = getInput("Phone number: ");
				contact[i].birthdayDate = getInput("Date of birth: ");
				contact[i].favouriteMeal = getInput("Favourite meal: ");
				contact[i].underwearColor = getInput("Color of underwear: ");
				contact[i].darkestSecret = getInput("Tell me a secret: ");
				std::cout << "Contact added!"<< std::endl;
			}
		}
		else if (input == "SEARCH")
		{
			numConts = display(contact);
			index = getInput("Index of contact you want to view: ");
			tempnum = atoi(index.c_str()) - 1;
			if (tempnum < 0 || tempnum >= numConts)
				std::cout << "We dont have that many contacts" << std::endl;
			else
				details(tempnum, contact);
		}
		else
		{
			std::cout << "Oops try again!" << std::endl;
		}
	}
	return (0);
}
