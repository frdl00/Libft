/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:15:25 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 17:17:37 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	
	i = 0;
	char *result = malloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);

	while (s[i])
	{
		result[i] = f(i , s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	next_alpha(unsigned int i, char c)
// {
// 	char result =  c + i;
// 	return (result);
// }

// int main(int argc, char const *argv[])
// {
// 	char *result = ft_strmapi("cba", next_alpha);
// 	printf("%s\n", result);


// 	return 0;
// }
