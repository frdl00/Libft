/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:31:05 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 16:49:49 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
	//burada neden & koymuşum
		return ((char *)&s[i]);
	return (NULL);
}

/* TEST
ft_strchr(0x62bcb79fb020: "teste", 1024: '\0'):
expected: 0x62bcb79fb025
yours: (nil)

*/