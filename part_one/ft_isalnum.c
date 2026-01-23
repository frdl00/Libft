//bir karakter harf ya da rakam mı diye kontrol ediyor (isalpha ve isdigit)

#include "libft.h"

// alfabetik ve rakam hariç heeeeer şey 0
int ft_isalnum(int c)
{
    int i;
    i =0;

    if(ft_isalpha(c) || ft_isdigit(c))
    {
        return (1);
    }
    return (0);
}
