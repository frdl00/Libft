/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:16:01 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 17:22:37 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
fd'ye stringi yazıyor (outputu dosyaya/fd)
*/
void	ft_putstr_fd(char *s, int fd)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main()
// {
// 	char s[] = "salak";
// 	int fd = open("fardal.txt", O_WRONLY);
// 	ft_putstr_fd(s, fd);
// }

