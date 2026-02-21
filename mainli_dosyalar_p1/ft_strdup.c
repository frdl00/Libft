#include "libft.h"

char *ft_strdup(const char *s)
{
	//strlen kullandığında sondaki null karakterini saymadığı için +1 ekle
	//zaten cahr 1 byte olduğu iin mallocta tekrar sizeof kullanmana gerek yok
	char *cpy = malloc((ft_strlen(s) + 1));

	if(!cpy)
		return NULL;
		
	ft_memcpy(cpy, s, ft_strlen(s) + 1);
	return (cpy);
}

// int main()
// {
// 	char bla[] = "blabla";
// 	char *son = ft_strdup(bla);
// 	printf("%s", son);
// }

// #include <stdio.h>

// int main()
// {
// 	char *chr = "asdfghjk987654321";
// 	char *rslt = ft_strdup(chr);
// 	printf("%s", rslt);
// }

//tik