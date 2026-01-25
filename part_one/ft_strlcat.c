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
