/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:25:56 by fardal            #+#    #+#             */
/*   Updated: 2026/01/30 16:24:23 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdlib.h>
 #include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

    if ((size != 0) && (nmemb > __SIZE_MAX__ / size))
	{
        return (NULL);
	}
	ptr = malloc(nmemb * size);
	//overflow kontrolü yapmam gerekiyormuş ???
	if (ptr == NULL)
		return (NULL);

	ft_bzero(ptr, nmemb * size);

	return (ptr);
}
