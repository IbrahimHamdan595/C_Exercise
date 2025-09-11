/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:21:24 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/11 21:21:24 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	int		first;
	int		second;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					first = (a - '0') * 10 + (b - '0');
					second = (c - '0') * 10 + (d - '0');

					if (second > first)
					{
						write(1, &a, 1);
						write(1, &b, 1);
						write(1, " ", 1);
						write(1, &c, 1);
						write(1, &d, 1);
						if (!(a == '9' && b == '8' && c == '9' && d == '9'))
							write(1, ", ", 2);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
