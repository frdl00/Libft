/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:15:46 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 17:17:57 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;
	i = 0;

	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	next_alpha(unsigned int i, char *c)
// {
// 	*c =  *c + i;
// }

// int main(int argc, char const *argv[])
// {
// 	char str[] = "aaa";
// 	ft_striteri(str, next_alpha);
// 	printf("%s\n", str);

// 	return 0;
// }
