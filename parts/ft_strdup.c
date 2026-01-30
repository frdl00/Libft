/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:37:13 by fardal            #+#    #+#             */
/*   Updated: 2026/01/30 15:44:32 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	//strlen kullandığında sondaki null karakterini saymadığı için +1 ekle
	//zaten cahr 1 byte olduğu iin mallocta tekrar sizeof kullanmana gerek yok
	char *cpy = malloc((ft_strlen(s) + 1));

	if(!cpy)
		return NULL;
		
	ft_memcpy(cpy, s, ft_strlen(s) + 1);
	return (cpy);
}