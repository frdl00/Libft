//bir karakter harf ya da rakam mı diye kontrol ediyor (isalpha ve isdigit)
int fT_isalnum(int c)
{
    int i;
    i =0;
    if(ft_isalpha(c) || ft_isdigit(c))
    {
        return (1);
    }
    return (0);
}
