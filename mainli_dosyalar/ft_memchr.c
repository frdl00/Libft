 #include "libft.h"
//strchr sadece string içinde karakter arıyor ve sonuna kadar arıyor fakat bunda veri itipi önemsiz ve sadece ilk n byte ı arıyor
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *p  = (unsigned char *)s;
    i=0;

    while(i < n)
    {
        if(p[i] == c)
            return((char *)&p[i]);
        i++;
    }
    return NULL;
}

#include <stdio.h>
int main(void)
{
    char bla[] = "bu  bilgisayarı beyisizin teki kullanıyor";
    char alb = 'u';
    printf("%s\n", (char *)ft_memchr(bla, alb, 15));


    // int arr[] = {1, 3, 2, 5, 6};
    // char eleman = 3;
    // int *result = (int *)ft_memchr(arr, eleman, 5);

    // printf("%d ", *result);
    // printf("%d ", *++result);
    // printf("%d ", *++result);
    // printf("%d ", *++result);
}

