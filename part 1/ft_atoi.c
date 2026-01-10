int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	// turşum

	i = 0;
	sign = 1;
	result = 0;

    //yazdırılmayacak karakterleri geç 
    //(boşluk gibi outputta yok sayılacak karakterler)
    //boşluk sayılan karakterler : /t, /n, /v, /f, /r, ' '(space)
	while ((str[i] == '/t') || (str[i] == '/n') || (str[i] == '/v') 
    || (str[i] == '/f') || (str[i] == '/r') || (str[i] == ' '))
	{
		i++;
	}

    //işaret kontrolü (pozitifse yok say, negatifse sayıyı -1 ile çarp)
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}

    //rakam kontrolü (ilk rakam olmayan yerde dur)
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}

    //en son ulaştığın sayıyı işaretiyle beraber döndür
	return (result * sign);
}
