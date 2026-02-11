/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:15:36 by fardal            #+#    #+#             */
/*   Updated: 2026/02/09 17:49:25 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//iki diziyi yanyana birleştiriyo
char	*ft_strjoin(char const *s1, char const *s2)
{
	char 	*join;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	if(!s1 || !s2)
		return (NULL);

	join = malloc(len1 + len2 + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, len1);
	ft_memcpy(join + len1, s2, len2);
	join[len1 + len2] = '\0';

	return (join);
}

// #include <stdio.h>

// int main()
// {
// 	char *bla = "bu bilgisayarı beyinsizin teki kullanmıyor.";
// 	char *alb = "parkın birinde oturup hiç kouşmadan düşünmem gerek.";
// 	char *son = ft_strjoin(bla, alb);
// 	printf("%s", son);
// }
