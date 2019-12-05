/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:02:48 by narodrig          #+#    #+#             */
/*   Updated: 2019/12/03 22:47:17 by narodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int				n;
	int unsigned	count;
	int unsigned	numb_val;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (-1) * nb;
	}
	numb_val = nb;
	count = 1;
	while (numb_val >= 10)
	{
		numb_val = numb_val / 10;
		count = count * 10;
	}
	while (count >= 1)
	{
		n = (nb / count);
		nb = (nb % count);
		n = n + 48;
		write(1, &n, 1);
		count = count / 10;
	}
}
