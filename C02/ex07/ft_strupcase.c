/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamdan <ihamdan@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:41:37 by ihamdan           #+#    #+#             */
/*   Updated: 2025/09/14 22:41:37 by ihamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int i = 0;
    while (str[i] != '\0') {
        str[i] = str[i] - 32;
		i++;
    }
    return str;
}

int	main(void)
{
	char	*c = "test";

	ft_strupcase(c);
}