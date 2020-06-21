/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 16:23:13 by dmuhlang          #+#    #+#             */
/*   Updated: 2020/06/21 10:22:25 by dmuhlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb()
{
    int a;
    int b;
    int c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')

        {
			c = a + 1;
			while (c <= '9')
			{
        	    ft_putchar(a);
           		ft_putchar(b);
    		 	 ft_putchar(c);
				ft_putchar(',');
				ft_putchar(' ');
				 c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}

int	main()
{
	ft_print_comb();
	return(0);
}
