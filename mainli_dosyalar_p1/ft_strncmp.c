int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s2[i] != '\0' || s1[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
// 	return 0;
// }


/* TESTS
ft_print_result(ft_strncmp("test\200", "test\0", 6));
Expected (cat -e test11.output):
1
Your result (cat -e user_output_test11):
-1

*/