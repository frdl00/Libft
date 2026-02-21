int ft_isascii(int c)
{
    if((c >= 0 && c <= 127))
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>

int main() 
{
    printf("%d\n", ft_isascii(2));
}

//tik

//char 1 byte = 8 bitlik bir tam sayı yipidir. 8 bit -> 255 ye kadar değer tutabilir (2^8  =256)
//ascii 0-127 arası. 128-255 arasını tanımlamıyor.
