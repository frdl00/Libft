#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    i=0;

    while(src[i] && i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return ft_strlen(dst);
}

int main()
{
    char a[90] = "fatma";
    char *b = "nur";

    size_t bla = ft_strlcpy(a, b, 0);
    printf("%zu\n", bla);
    printf("%s\n", a);
}