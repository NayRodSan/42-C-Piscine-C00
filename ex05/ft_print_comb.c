/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:30:47 by narodrig          #+#    #+#             */
/*   Updated: 2019/12/04 20:07:23 by narodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int c, int d, int u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = 48;
	while (c < 58)
	{
		d = c + 1;
		while (d < 58)
		{
			u = d + 1;
			while (u < 58)
			{
				ft_print_numbers(c, d, u);
				if (c < 55)
				{
					write(1, ", ", 2);
				}
				u++;
			}
			d++;
		}
		c++;
	}
}
