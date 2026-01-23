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