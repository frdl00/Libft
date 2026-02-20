/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:37:13 by fardal            #+#    #+#             */
/*   Updated: 2026/02/09 12:28:51 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = malloc((ft_strlen(s) + 1));
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, s, ft_strlen(s) + 1);
	return (cpy);
}
