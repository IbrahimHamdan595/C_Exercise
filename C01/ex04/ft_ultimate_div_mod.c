/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 23:20:41 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/11 23:20:41 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int	main(void)
{
	int		x;
	int		y;

	x = 10;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	return (0);
}
