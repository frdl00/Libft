/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:14:53 by fardal            #+#    #+#             */
/*   Updated: 2026/02/09 17:59:07 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t str_len;
	char *sub;

	str_len = ft_strlen(s);
	if (!s)
		return (NULL);

	if (start >= str_len)
		return (ft_strdup(""));

	if (len > str_len - start)
        len = str_len - start;
	sub = malloc(len + 1);

	if(!sub)
		return (NULL);
	//s pointerını start indeksinden başlatmak istiyorsan 
	//s[start] yapamazsın bu tek indeks alır strattan son indekse kadarki karakterleri almaz
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
#include <stdio.h>

// int main()
// {
// 	char *bla = "bu bilgisayarı beyinsizin teki kullanmıyor.";
// 	char *son = ft_substr(bla, 7, 10);
// 	printf("%s" , son);
// }
