#include <strings.h>
//str ye n kadar 0 
void ft_bzero(void *s, size_t n)
{
    unsigned char *p = (unsigned char *) s;
    size_t i;
    i = 0;

    while(i < n)
    {
        p[i] = '\0';
        i++; 
    }
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
//     char arr[] = "asdfghjkli";
//     int i = 0;

//     ft_bzero(arr, 5);

//     while(i < 10)
//     {
//         printf("%c", arr[i]);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

//not : stringi yazdırırken tek seferde print edemezsin çünkü C de string \0 karakterine kadar yazdırılır.
//o yüzden karakterleri tek tek yazdrıman lazım

//tik