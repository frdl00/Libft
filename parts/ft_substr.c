//daha kontrol edilmedi
#include "libft.h"
//başka ne kontrolü var oooooofffffff sıkıldım da biraz ama neyse

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	// len = ft_strlen(s[start]) + 1;
	//mallocta char pointerı kullaman lazım char * şeklinde
	char *sub = malloc(len + 1);

	if(!s || start > ft_strlen(s))
		return (NULL);
	//s pointerını start indeksinden başlatmak istiyorsan 
	//s[start] yapamazsın bu tek indeks alır strattan son indekse kadarki karakterleri almaz
	ft_memcpy(sub, s + start, len);
	return (sub);
}
#include <stdio.h>

int main()
{
	char *bla = "bu bilgisayarı beyinsizin teki kullanmıyor.";
	char *son = ft_substr(bla, 7, 10);
	printf("%s" , son);
}
