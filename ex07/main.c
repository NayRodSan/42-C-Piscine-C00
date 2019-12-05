/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:56:16 by narodrig          #+#    #+#             */
/*   Updated: 2019/12/03 21:48:48 by narodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int	main()
{
	ft_putnbr(0);
	ft_putnbr(42);
	ft_putnbr(10);
	ft_putnbr(20);
	ft_putnbr(50);
	ft_putnbr(100);
	ft_putnbr(500);
	ft_putnbr(1000);
	ft_putnbr(2019);
	ft_putnbr(-10);
	ft_putnbr(-1000);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
}
