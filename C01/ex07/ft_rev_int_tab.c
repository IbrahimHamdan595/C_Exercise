/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:00:57 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/12 00:00:57 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	j = size - 1;
	i = 0;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

int	main(void)
{
	int		array[3];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	ft_rev_int_tab(array, 3);
	return (0);
}
