/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:50:28 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/11 17:50:28 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
		c = 'P';
	else
		c = 'N';
	write(1, &c, 1);
}

int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
	return (0);
}
