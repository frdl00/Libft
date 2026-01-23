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
        if(s[i] == c)
            return((char *)&s[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&s[i]);
    return (NULL);
}

#include <stdio.h>
int main()
{
    char *s = "Hello World";
    char x = 'l';

    char *a = ft_strchr(s, x);
    printf("%s\n", a);
}