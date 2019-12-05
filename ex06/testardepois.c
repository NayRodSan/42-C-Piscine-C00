/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:01:05 by narodrig          #+#    #+#             */
/*   Updated: 2019/11/29 19:18:38 by narodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

int main()
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	int p;
	int s;
	int t;
	int q;

	p = 48;
	while (p < 58)
	{	
		s = 48;
		while (s < 58)
		{
			t = 48;
			while (t < 58)
			{
				q = 48;
				while (q < 58)
				{
					write(1, &p, 1);
					write(1, &s, 1);
					write(1, " ", 1);
					write(1, &t, 1);
					write(1, &q, 1);

					if ((p != 57) || (s != 56) || (t != 57) || (q != 57))
					{
						write(1, ", ", 2);
					}
					q++;
				}
				t++;
			}
			s++;
		}
		p++;
	}
}
