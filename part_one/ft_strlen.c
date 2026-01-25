#include "libft.h"
#include <stdio.h>
//is used for calculating the length of a string
size_t ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
