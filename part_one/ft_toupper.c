#include <ctype.h>

int ft_toupper(int c)
{
    char a;
   if(97 <= c && c <= 122)
   {
    c = c - 32;
   }
   a = c;
   return a; 
}