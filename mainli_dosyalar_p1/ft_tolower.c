#include <ctype.h>

int ft_tolower(int c)
{
    char a;
   if(65 <= c && c <= 90)
   {
    c = c + 32;
   }
   a = c;
   return a;
}

#include <stdio.h>

int main(void)
{
    char chr = 'A';
    chr = ft_tolower(chr);
    printf("%c", chr);
}