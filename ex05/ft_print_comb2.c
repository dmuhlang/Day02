/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:42:42 by dmuhlang          #+#    #+#             */
/*   Updated: 2020/06/21 13:46:41 by dmuhlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb()
{
	int i;
	int j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i/10 +'0');
			ft_putchar(i % 10 +'0');
			ft_putchar(' ');
			ft_putchar(j/10 +'0');
			ft_putchar(j % 10 +'0');
			ft_putchar(',');
			ft_putchar(' ');
				
					j++;
		}
		i=i+1;
	}
}


