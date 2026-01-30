

#include "libft.h"


char *ft_strrchr(const char *s, int c)
{
	int i;
	i = ft_strlen((char *)s);   // type casting (veri tipi değiştirme)

	while (i >= 0)
	{
		//
		if(s[i] == (char)c)
		//
			return((char *)&s[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
    char *s = "Hello World";
    char x = 'l';

    char *a = ft_strrchr(s, x);
    printf("%s\n", a);
}