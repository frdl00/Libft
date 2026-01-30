#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;
    
    i = 0;
    src_len = ft_strlen((char *)src);

    if (size <= 0)
        return (src_len);

    while(src[i] && i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}

int main()
{
    char a[90] = "fatma";
    char *b = "nur";

    size_t bla = ft_strlcpy(a, b, 0);
    printf("%zu\n", bla);
    printf("%s\n", a);
}