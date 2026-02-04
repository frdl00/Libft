
/*
file descriptor nedir ?
- File descriptor = dosyanın ID numarası
- File descriptor = dosyanın numarası
peki bu numaralar kim tarafından atanıyor -> işletim sistemi tarafından (OS)
- Bilgisayar dosyaları isimle değil numarayla tanır

fd -> file descriptor 
*/
#include "libft.h"
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd  = open("fardal.txt", W_OK);
// 	ft_putchar_fd('t', fd);
// }
