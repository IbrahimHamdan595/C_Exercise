/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:13:52 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/14 22:13:52 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	if (str == '\0') {
        return 0;
    }
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] < '97' || str[i] > '122') {
            return 0;
        }
        i++;
    }
    return 1;
}

int	main(void)
{
	char	*c = "test";

	ft_str_is_lowercase(c);
}
