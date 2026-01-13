//karakter sayısal bir değer ise 0 olmayan bir değer döndürür
int ift_sdigit(int c)
{
    if((c >= '0' && c <= '9'))
    {
        return (1);
    }
    return (0);
}
