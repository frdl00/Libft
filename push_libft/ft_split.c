/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardal <fardal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:15:56 by fardal            #+#    #+#             */
/*   Updated: 2026/02/20 09:53:56 by fardal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	i;
	int	counter;

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
	int	i;
	int	j;
	int	save_i;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		save_i = i;
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

char	**ft_split(char const *s, char c)
{
	char	**splited;

	splited = malloc((sizeof(char *)) * (ft_word_count(s, c) + 1));
	if (!splited)
		return (NULL);
	return (split_add(s, c, splited));
}
