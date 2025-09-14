/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:39:29 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/14 12:39:29 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		write(1, &dest[i], 1);
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int	main(void)
{
	char	*c = "Test";
	char destination[20];
	ft_strcpy(destination, c);
}

