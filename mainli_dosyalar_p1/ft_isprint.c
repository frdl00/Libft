//yazdırılabilir karakterlerse 1 döndürür
int ft_isprint(int c)
{
    if((c > 32 && c < 127))
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>

int main() 
{
    printf("%d\n", ft_isprint('\0'));
}

//tik