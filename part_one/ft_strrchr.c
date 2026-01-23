
#include "libft.h"

/*
verilen bir string içerisinde 'c' varsa
onun pointerını (son bulduğu karakteri) (yani, bulduğu karakteri ve sonrasını döndürüyor)
*/
char *ft_strrchr(const char *s, int c)
{
    int i;
    i = ft_strlen((char *)s);   // type casting (veri tipi değiştirme)

    while (i > 0)
    {
        if(s[i] == c)
            return((char *)&s[i]);
        i--;
    }
    return (NULL);
}
