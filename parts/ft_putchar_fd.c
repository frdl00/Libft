/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:12:59 by fardal            #+#    #+#             */
/*   Updated: 2026/02/13 19:02:05 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
	
//  int main()
// {
// 	int fd  = open("fardal.txt", O_CREAT, O_TRUNC, O_RDONLY, 644);
//  	ft_putchar_fd('t', fd);
// }

/*
file descriptor nedir ?
- File descriptor = dosyanın ID numarası
- File descriptor = dosyanın numarası
peki bu numaralar kim tarafından atanıyor -> işletim sistemi tarafından (OS)
- Bilgisayar dosyaları isimle değil numarayla tanır

fd -> file descriptor 
*/
