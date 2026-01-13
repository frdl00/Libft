int ift_sascii(int c)
{
    if((c >= 0 && c <= 127))
    {
        return (1);
    }
    return (0);
}
