/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:17:13 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/12 00:17:13 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			temp = tab[i];
			if (tab[i] > tab[j])
			{
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int		array[3];

	array[0] = 3;
	array[1] = 1;
	array[2] = 5;
	ft_sort_int_tab(array, 3);
	return (0);
}
