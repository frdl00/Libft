#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;

	while(lst)
	{
		f(lst->content);
		lst = lst->next;
	}	
}
// void f(void *content)
// {
// 	int i = 0;
// 	char *str = (char *)content;
// 	while(str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;

// 	}
// }
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	t_list *lst = NULL;

// 	t_list *node = ft_lstnew(ft_strdup("abdullah"));
// 	t_list *node1 = ft_lstnew(ft_strdup("blabla"));
// 	t_list *node2 = ft_lstnew(ft_strdup("aalbalb"));
// 	ft_lstadd_back(&lst, node);
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);

// 	ft_lstiter(lst, f);

// 	while(lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}

// 	return 0;
// }


