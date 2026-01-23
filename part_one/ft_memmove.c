#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest1 = (unsigned char *)dest;
    unsigned char *src1 = (unsigned char *)src;
    unsigned char *temp = src1;
    i = 0;

    while(i < n)
    {
        dest1[i] = temp[i];
        i++;
    }
    return (dest1);
}   
