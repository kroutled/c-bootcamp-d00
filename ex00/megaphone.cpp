/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:50:35 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/11 08:45:29 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int		i = 1;
	int		l = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE STATIC *" << std::endl;
	else
		while (argv[i] != '\0')
		{
			while(argv[i][l])
			{
				argv[i][l] =  std::toupper(argv[i][l]);
				std::cout << argv[i][l];
				l++;
			}
			l = 0;
			i++;
		}
	return (0);
}
