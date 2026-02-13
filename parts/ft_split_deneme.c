#include "libft.h"

char **ft_split(char const *s, char c)
{
    char ** splitted;

    splited = malloc(sizeof(char *) * ft_word_count(s, c)); //belleke yer ayırmak için

    if(!splited)
        return (NULL);
    
    return (); //splited dizisini geri döndür
}

int ft_word_count(char const *s, char c)
{
    int i; //indexler arasında gezmek için
    int counter; //kelime sayısını tutmak için

    i = 0;
    counter = 0;

    while(s[i])
    {
        while (s[i] == c)
        i++; //baştaki ayraçları görmezden gel

    if(s[i])
        counter++; //ayraç dışında gördüğün ilk karakteri kelimenin başlangıcı olarak gör ve co8nterı 1 arttır

    while(s[i != c && s[i] != '\0'])
        i++; //kelimenin içinde olduğun sürece indexi arttır sayaaç dokunma
    }
    return (counter);
}

char **split_add(char const *s, char c, char **splited)
{
    int i; //s'nin sayacı
    int j; //splited'in sayacı

    i = 0;
    j = 0;

    while(s[i])
    {
        while(s[i] == c) //ayraçları atla
            i++;

        if(s[i] == '\0')
            break; //eğer s dizisi boşsa döngüden çık

            save_i = i; //tüm ayraçları atladıktan sonra gördüğün ilk
            //karakteri kelimenin başlangıç indexi olarak kaydet

        while(s[i] != c && s[])
            
    }
}