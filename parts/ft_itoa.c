/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:16:17 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 17:19:27 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	len_of_number(int n)
{
	int	count;
	count = 0;

	if (n == 0)
		count++;

	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char *str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(len_of_number(n) + 1);
	if (!str)
	return (NULL);
	if (n == 0)
		str[0] = '0';

	int len = len_of_number(n);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		while (len > 0)
		{
			str[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	else
	{
		while(len >= 0)
		{
			str[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	int t =  0;
// 	char *result = ft_itoa(t);
// 	printf("%s\n", result);
// 	return 0;
// }