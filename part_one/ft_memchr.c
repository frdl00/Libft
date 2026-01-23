 #include "libft.h"
//strchr sadece string içinde karakter arıyor ve sonuna kadar arıyor fakat bunda veri itipi önemsiz ve sadece ilk n byte ı arıyor
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *p  = (unsigned char *)s;
    i=0;

    while(i < n)
    {
        if(p[i] == (unsigned char)c)
            return((char *)&p[i]);
        i++;
    }
    return NULL;
}
