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
    dest1[i] = '\0';
    return (dest1);
}

#include <stdio.h>
int main(void)
{
    char bla[] = "bu bilgisayarı beyinsizin teki kullanıyor.";
    char alb[] = "bu bilgisayarı akıllının teki kullanıyor.";
    char *result = (char *)ft_memmove(bla, alb, 20);
    printf("%s", result);
    
}
