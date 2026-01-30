int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	
	//başta boşlukları atlar sonra en fazla bir tane işaret kabul ede -+, bu işarettne hemen sonra rakam gelmek zorunda ve bu kural bozulursa 0 öndürür
    //yazdırılmayacak karakterleri geç 
    //(boşluk gibi outputta yok sayılacak karakterler)
    //boşluk sayılan karakterler : /t, /n, /v, /f, /r, ' '(space)
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') 
    || (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
	{
		i++;
	}

    //işaret kontrolü (pozitifse yok say, negatifse sayıyı -1 ile çarp)(ama sadece bir tane işareti say geri kalanını atlasın)
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}

    //rakam kontrolü (ilk rakam olmayan yerde dur)
	while (str[i] >= '0' && str[i] <= '9')
	{
		//result int ve str string olduğu için dizideki sayılar int değil ascii deerli charlar olarak alınır ve gerek(int) değerlerini almaları için -48('0') ypamak gerekir
	
		result = (result * 10) + (str[i] - '0');
		i++;
	}

    //en son ulaştığın sayıyı işaretiyle beraber döndür
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char bla[] = "-4-3456";
	int alb = ft_atoi(bla);
	int alb2 = atoi(bla);

	printf("%d\n", alb);
	printf("%d\n", alb2);
}
