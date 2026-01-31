#include "libft.h"
//kontrolleri eklemedin


char *ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	size_t len1;
	size_t len2;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	join = malloc(len1 + len2 + 1);
	ft_memcpy(join, s1, len1);
	ft_memcpy(join + len1, s2, len2);
	join[len1 + len2] = '\0';
	
	return (join);
}

#include <stdio.h>

int main()
{
	char *bla = "bu bilgisayarı beyinsizin teki kullanmıyor.";
	char *alb = "parkın birinde oturup hiç kouşmadan düşünmem gerek.";
	char *son = ft_strjoin(bla, alb);
	printf("%s", son);
}
