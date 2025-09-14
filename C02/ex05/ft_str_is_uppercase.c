/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:16:33 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/14 22:16:33 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	if (str == '\0') {
        return 0;
    }
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] < '65' || str[i] > '90') {
            return 0;
        }
        i++;
    }
    return 1;
}

int	main(void)
{
	char	*c = "TEST";

	ft_str_is_uppercase(c);
}