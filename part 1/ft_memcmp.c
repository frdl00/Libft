 #include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char *p1 = (unsigned char *)s1;
    unsigned char *p2 = (unsigned char *)s2;
    i = 0;

    while(i < n)
    {
        if(p1[i] == p2[i])
            i++;
        else
            return p1[i] - p2[i];
    }
    return 0;
}

#include <stdio.h>

int main(void)
{
    char bla[] = "bu bilgisayarı beyinsizin teki kullanıyor.";
    char alb[]  = "bu bilgisayarı akıllının teki kullanıyor.";
    int result = ft_memcmp(bla, alb, 20);
    printf("%d", result);
    
}