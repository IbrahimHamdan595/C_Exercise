/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:44:33 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/14 22:44:33 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        str[i] = str[i] + 32;
        i++;
    }
    return str;
}

int	main(void)
{
	char	*c = "TEST";

	ft_strlowcase(c);
}