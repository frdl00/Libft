//str içinde str arıyor
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;

    if(needle[0] == '\0')
        return ((char *)haystack);
    while(haystack[i] && i < len)
    {
        j = 0;
        while((i+j) < len && needle[j] && haystack[i+j] && 
            haystack[i+j] == needle[j])
        {
            j++;
        }
        if(needle[j] == '\0')
        //
            return ((char *)&haystack[i]);
        i++;
    }
    return NULL;
}

#include <stdio.h>
int main(void)
{
    char bla[] = "bu bilgisayarı beyinsizin teki kullanıyor.";
    char alb[] = "teki";

    char *result = ft_strnstr(bla, alb, ft_strlen(bla));
    printf("%s\n", result);
}
