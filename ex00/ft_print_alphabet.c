/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:45:39 by dmuhlang          #+#    #+#             */
/*   Updated: 2020/06/19 11:47:09 by dmuhlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet()

{
	char i;
	i = 'a';
	while(i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

	
