//karakter alfabetikse 0 olmayan bir değer döndürür

#include "libft.h"
int ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return (1);
    }
    return (0);
}
