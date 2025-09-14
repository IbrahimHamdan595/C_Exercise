/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:02:12 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/14 13:02:12 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int i = 0;
	if(i == '\n')
	{
		return 1;
	}
	while (str[i] != '\0')
	{
		if(str[i] >='a' && str[i] <='z' || str[i] >='A' && str[i] <='Z' )
		{
			continue;
		}
		else
			return 0;
		i++;
	}
}

int	main(void)
{
	char	*c = "Test23";

	ft_str_is_alpha(c);
}
