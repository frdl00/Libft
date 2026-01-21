#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *p = (unsigned char *) s;
    int i;
    i = 0;

    while(i < n)
    {
        p[i] = 't';
        i++; 
    }
}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char arr[] = "asdfghjkli";
    int i =0;

    ft_bzero(arr, 5);

    while(i < 10)
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");

    return 0;
}