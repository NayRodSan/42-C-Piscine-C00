/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gt_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 18:20:10 by narodrig          #+#    #+#             */
/*   Updated: 2019/11/24 22:08:20 by narodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char n;

	n = 97;
	while (n < 123)
	{
		write(1, &n, 1);
		n++;
	}
}