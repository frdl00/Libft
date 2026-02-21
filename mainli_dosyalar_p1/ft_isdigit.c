//karakter sayısal bir değer ise 0 olmayan bir değer döndürür

#include "libft.h"

int ft_isdigit(int c)
{
    if((c >= '0' && c <= '9'))
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>

int main() 
{
    printf("%d\n", ft_isdigit('c'));
}

//tik