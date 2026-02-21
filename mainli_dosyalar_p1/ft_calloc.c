#include "libft.h"
//malloc ile bellek ayırdığında oluşan garbage value üretiyorsun o garbage valueleri 0 yapıyo calloc
//uani malloc'un daha güvenli ve mantılı versiyonu
void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr = malloc(nmemb * size);
	//overflow kontrolü yapmam gerekiyormuş ???
	if (ptr == NULL)
		return (NULL);

	ft_bzero(ptr, nmemb * size);

	return (ptr);
}
#include <stdio.h>
int main()
{
	int *arr = ft_calloc(6, sizeof(int));

	int i = 0;
	while(i < 6)
	{
		printf("%d", arr[i]);
		i++;
	}
	
}