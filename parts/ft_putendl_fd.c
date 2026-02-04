


#include "libft.h"
/*
belirtilen fd'ye string yazıyıor ve new line ekliyor
*/
void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n" , 1);
}

// int main()
// {
// 	char s[] = "salak";
// 	int fd = open("fardal.txt", O_WRONLY);
// 	ft_putendl_fd(s, fd);
// }

