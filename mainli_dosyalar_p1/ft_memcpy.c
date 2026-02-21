
#include "libft.h"
//eğer kopyalanacak ve yapıştırılacak alan çakışıyorsa bu fonksiyon hata verebilir bu durumlarda memmove kullnaılmalı
//srcden deste n byte kopyala ama overlap hesabı yapmadan 
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest1 = (unsigned char *)dest;
    unsigned char *src1 = (unsigned char *)src;
    size_t i ;
    i = 0;

    //kontrol: iki string de null ise işlem yapamazmışım
    if(!dest1 && !src1)
        return (NULL);
    while(i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
    return dest;
}

//#include <stdio.h>
// int main(void)
// {
//     char bla[] = "asdfsdf";
//     char alb[]  = "atursun";
//     char *result = (char *)ft_memcpy(bla, alb, 5);
//     if (result == NULL)
//         printf("NULL\n");
//     else
//         printf("%s\n", result);
// }

// #include <stdio.h>
// int main()
// {
//     char dst[] = "selamyemekaçım";
//     char *src = "montusu";

//     char *rslt = ft_memcpy(dst, src, 8);

//     printf("%s", rslt);
// }
//dst ve src yi char *dst gibi gibi atarsan(pointer) string literal(read-only memory de) olur ve bu değişkenlerde bir değişikik yapamazsın
//char dst[] şeklinde ataman gerekiyor.

//tik