/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:18:32 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/14 22:18:32 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	if (str == '\0') {
        return 0;
    }
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] < '37' || str[i] > '126') {
            return 0;
        }
        i++;
    }
    return 1;
}

int	main(void)
{
	char	*c = "test";

	ft_str_is_printable(c);
}