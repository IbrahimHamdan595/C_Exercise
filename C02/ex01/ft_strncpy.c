/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:55:11 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/14 12:55:11 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		write(1, &dest[i], 1);
		i++;
	}
	return dest;
}

int	main(void)
{
	char	*c = "Test";
	char destination[20];
	ft_strncpy(destination, c, 2);
}
