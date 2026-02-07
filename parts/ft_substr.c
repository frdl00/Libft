/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:14:53 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 17:16:37 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//daha kontrol edilmedi
#include "libft.h"
//başka ne kontrolü var oooooofffffff sıkıldım da biraz ama neyse

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t str_len;
	// len = ft_strlen(s[start]) + 1;
	//mallocta char pointerı kullaman lazım char * şeklinde
	if (!s)
		return (NULL);
//mö
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
//mö
	if (len > str_len - start)
        len = str_len - start;
	
	char *sub = malloc(len + 1);

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
