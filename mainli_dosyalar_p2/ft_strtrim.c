/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:15:04 by fardal            #+#    #+#             */
/*   Updated: 2026/02/07 17:16:59 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *copy;
	//negatif sayı riskinden kurtulmak için
	//baş index
	size_t start;
	//son index
	size_t end;

	start = 0;
	end = ft_strlen(s1);

	//eğer s1 ya da set poiterı yoksa null döndür
	if (!s1 || !set)
		return (NULL);

	//s1 in içinde önce baştan sonra sondan başlayarak set kümesindeki karakterlerden biri var mı iye kontrol eder ve varsa siler.
	//yani s1 de set dizisi aranmaz.
	//önce baştan sonra s1 de set teki karakterleden biri var mı diye kontor eder ve eğer s1 de setteki karakter yoksa aramayı durdurur. 
	//sonrasında sondan başlayıp aynı işlemi yapıp s1 dizisinde ortada kalan kısmı başka bir diiye atar veb unun döndürür.

	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}	
	//eğer end > start şunu garanti eder: Baştan her şey trimlendiyse, 
	//sondan trimlemeye devam edip end’in start’ın ALTINA düşmesini engeller.
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}

	copy = malloc(end - start + 1);

	//burda bi kontrol var
	if (!copy)
		return (NULL);

	ft_memcpy(copy, s1 + start, end - start);
	
	//son indeksine null karkater ekle (copy nin son indeksi end-start)
	copy[end - start] = '\0';

	return (copy);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	char *s1 = "trallallalla";
// 	char *set = "tral";

// 	printf("%s\n", ft_strtrim(s1, set));
	
// 	return 0;
// }

/*
char *s1 = "dededeabdullahdedede"
char *set = "dea"
*/





//NOTTTTTTTTT

/* bu da ekstra bir kontrolmüş gererk var mı iblmiyorum:

if (*s1 == '\0')
    return (ft_strdup(""));

s1 == "" durumu zaten otomatik doğru çalışıyor
ama istersen netlik için eklenebilir: diyr salak gpt
	*/