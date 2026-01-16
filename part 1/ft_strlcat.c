#include "libft.h"

/*
size_t: pozitif integer sayılar

dst = fatma
src = nur

return = fatmanur
*/
#include <stdio.h>
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;

    j=0;
    i=0;
    while(dst[i] && i < size)
        i++;
    while(src[j] && i < (size - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return ft_strlen(dst);
}

int main()
{
    char a[90] = "fatma";
    char *b = "nur";

    size_t bla = ft_strlcat(a, b, 4);
    printf("%zu\n", bla);
    printf("%s\n", a);
}
