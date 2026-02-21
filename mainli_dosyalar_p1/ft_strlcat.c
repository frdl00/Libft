#include "libft.h"

/*
size_t: pozitif integer sayılar

dst = fatma
src = nur

return = fatmanur
*/
#include <stdio.h>
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t i; //?? niye int i kullanıp src_len kullanmadığımı unuttum yine

    i = 0;
    src_len = ft_strlen((char *)src);
    dst_len = 0;

    //dst_len size a kadar ölçülsün istiyoruz
    while(dst[dst_len] && dst_len < size)
        dst_len++;

    //eğer size ve dstlen eşit olursa dstlen alttaki wihle döngüsünde dst in gerçek uzunluğunu ölçmüyormuş
    //tam anlamadım neden bu if bloğuyla bunu kontrol etmem gerektiğini
    //dst_len == size olduğunda dst_len string uzunluuğu değildir ve bu üzden alttaki return güvenilir değildir ve kontrol zorunludur
    if(dst_len == size)
        return (size + src_len);

    while(src[i] && dst_len + i < size -1) //??
    { //??
        dst[dst_len + i] = src[i]; //??
        i++;
    } //??
    dst[dst_len + i] = '\0';

    return (dst_len + src_len);
}

// int main()
// {
//     char a[90] = "fatma";
//     char *b = "nur";

//     size_t bla = ft_strlcat(a, b, 4);
//     printf("%zu\n", bla);
//     printf("%s\n", a);
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char bla[10] = "asdfgh";
//     char alb[] = "qwerty";

//     size_t deneme = ft_strlcat(bla, alb, 10);
//     printf("%ld\n", deneme);
// }

#include <stdio.h>

int main()
{
	char *chr = "";
    char *chrr = "";
	char *rslt = ft_strchr(chr, 'd');
	printf("%s", rslt);
}
