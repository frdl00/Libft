/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:13:22 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 17:20:37 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// int main()
// {
// 	char s[] = "salak";
// 	int fd = open("fardal.txt", O_WRONLY);
// 	ft_putendl_fd(s, fd);
// }

/*
belirtilen fd'ye string yazıyıor ve new line ekliyor
*/