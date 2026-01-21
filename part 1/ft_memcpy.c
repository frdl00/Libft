
#include <string.h>
#include <stdio.h>

//eğer kopyalanacak ve yapıştırılacak alan çakışıyorsa bu fonksiyon hata verebilir bu durumlarda memmove kullnaılmalı
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest1 = (unsigned char *)dest;
    unsigned char *src1 = (unsigned char *)src;
    int i ;
    i = 0;

    //kontrol: iki string de null ise işlem yapamazmışım
    if(dest1 == NULL && src1 == NULL)
        return (NULL);
    while(i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
    return dest1;
}

int main(void)
{
    char bla[] = "asdfsdf";
    char alb[]  = "atursun";
    char *result = (char *)ft_memcpy(bla, alb, 5);
    if (result == NULL)
        printf("NULL\n");
    else
        printf("%s\n", result);
}
