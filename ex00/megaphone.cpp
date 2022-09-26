/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 02:06:00 by bberkass          #+#    #+#             */
/*   Updated: 2022/09/26 02:15:32 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return len;
}

int main(int ac, char **av){

	int i, j, len;

	i = 1;
	while(i < ac)
	{
		len = strlen(av[i]);
		j = 0;
		while(j < len)
		{
			if(av[i][j] >= 'a' && av[i][j] <= 'z')
				cout << (char)toupper(av[i][j]);
			else
				cout << (char)av[i][j];
			j++;
		}
		i++;
	}

	return 0;
}
