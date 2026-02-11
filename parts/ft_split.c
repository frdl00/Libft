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
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;

		if (s[i])
			counter++;

		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

char	**split_add(char const *s, char c, char **splited)
{
	int i;
	int j;
	int save_i;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break;
		save_i = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		splited[j] = ft_substr(s, save_i, i - save_i);
		if (!splited[j])
		{
			while (splited[j])
			{
				free(splited[j]);
				j++;
			}
			free(splited);
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


// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	char **result_array;

// 	result_array = ft_split("      ala   bla    lab     ", ' ');

// 	// array yazdırma döngüsü
// 	int i = 0;
// 	while (result_array[i]) {
// 		if (result_array[i+1])
// 			printf("index: [%d] -> %s\n" ,i, result_array[i]);
// 			free(result_array[i]);
// 		i++;
// 	}
// 	free(result_array);
// 	return 0;
// }
