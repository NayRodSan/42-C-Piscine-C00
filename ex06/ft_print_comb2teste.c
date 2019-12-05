/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:01:05 by narodrig          #+#    #+#             */
/*   Updated: 2019/12/04 13:50:37 by narodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

int	main()
{
	ft_print_comb2();
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int p;
	int s;
		
	p = 0;
	while (p < 100)
	{
		s = p + 1;
		while(s < 100)
		{
			ft_putchar(p / 10 + '0');
			ft_putchar(p % 10 + '0');
			ft_putchar(' ');
			ft_putchar(s / 10 + '0');
			ft_putchar(s % 10 + '0');
			if (p != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			s++;
		}
		p++;
	}
}
