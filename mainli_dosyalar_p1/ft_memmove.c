#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest1 = (unsigned char *)dest;
    unsigned char *src1 = (unsigned char *)src;
    i = 0;

    if (dest < src)
        return (ft_memcpy(dest, src, n));
    else {
        i = n;
        while(i > 0)
        {
            dest1[i - 1] = src1[i - 1];
            i--;
        }
    }
    return (dest1);
}   
/*
bu kodu iyice kontrol et çünkü "overlap" mantığı var 
ft_memcpy ve ft_memmove arasındaki farkın ne olduğunu öğrenirsen 
zaten egzersizi anlamış olursun
*/

#include <stdio.h>
int main(void)
{
    char bla[] = "bu bilgisayarı beyinsizin teki kullanıyor.";
    char alb[] = "bu bilgisayarı akıllının teki kullanıyor.";
    char *result = (char *)ft_memmove(bla, alb, 20);
    printf("%s", result);
    
}
