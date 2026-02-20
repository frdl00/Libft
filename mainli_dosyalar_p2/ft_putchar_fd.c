void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
	
//  int main()
// {
// 	int fd  = open("fardal.txt", O_CREAT, O_TRUNC, O_RDONLY, 644);
//  	ft_putchar_fd('t', fd);
// }

/*
file descriptor nedir ?
- File descriptor = dosyanın ID numarası
- File descriptor = dosyanın numarası
peki bu numaralar kim tarafından atanıyor -> işletim sistemi tarafından (OS)
- Bilgisayar dosyaları isimle değil numarayla tanır

fd -> file descriptor 
*/
