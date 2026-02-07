/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:24:14 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 17:17:17 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s2[i] != '\0' || s1[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
// 	return 0;
// }


/* TESTS
ft_print_result(ft_strncmp("test\200", "test\0", 6));
Expected (cat -e test11.output):
1
Your result (cat -e user_output_test11):
-1

*/