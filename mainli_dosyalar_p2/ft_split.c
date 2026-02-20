/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:15:56 by fardal            #+#    #+#             */
/*   Updated: 2026/02/09 18:02:08 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int i;//indexler arasında gezmek için
	int counter; //kelime sayısını tutmak için

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;//baştaki ayraçları görmezden gel

		if (s[i])
			counter++;//ayraç dışında gördüğün ilk karakteri kelimenin başlangıcı olarak gör ve co8nterı 1 arttır

		while (s[i] != c && s[i] != '\0')
			i++;//kelimenin içinde olduğun sürece indexi arttır sayaaç dokunma
	}
	return (counter); 
}

void	ft_free(char **str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		free(str[idx]);
		idx++;
	}
	free(str);
}

char	**split_add(char const *s, char c, char **splited)
{
	int i;//s'nin sayacı
	int j; //splited'in sayacı
	int save_i;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)//ayraçları atla
			i++;
		if (s[i] == '\0')
			break;//eğer s dizisi boşsa döngüden çık
		save_i = i;//tüm ayraçları atladıktan sonra gördüğün ilk
            //karakteri kelimenin başlangıç indexi olarak kaydet

		while (s[i] != c && s[i] != '\0')
			i++;
		splited[j] = ft_substr(s, save_i, i - save_i);
		if (!splited[j])
		{
			ft_free(splited);
			return (NULL);
		}
		j++;
	}
	splited[j] = NULL;
	return (splited);
}

char **ft_split(char const *s, char c)
{
	char **splited;

	splited = malloc((sizeof(char *)) * (ft_word_count(s , c) + 1));	// char pointerlık yer ayırıyor
	if(!splited)
		return (NULL);
	return (split_add(s, c, splited));
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char **str = ft_split("abdllah tursun   ajajaj", ' ');

	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);


	ft_free(str);
	return 0;
}
