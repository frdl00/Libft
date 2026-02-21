/*
verilen bir string içerisinde 'c' varsa
onun pointerını (ilk bulduğu karakteri) (yani, bulduğu karakteri ve sonrasını döndürüyor)
*/

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	int i;
	i=0;

	while(s[i])
	{
		if(s[i] == (char)c)
		//niye & eklemişim
			return((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     char *s = "Hello World";
//     char x = 'l';

//     char *a = ft_strchr(s, x);
//     printf("%s\n", a);
// }

/* TEST
ft_strchr(0x62bcb79fb020: "teste", 1024: '\0'):
expected: 0x62bcb79fb025
yours: (nil)

*/
#include <stdio.h>

int main()
{
	char *chr = "";
	char *rslt = ft_strchr(chr, 'd');
	printf("%ss", rslt);
}

//tik