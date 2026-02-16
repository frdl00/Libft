#include "libft.h"
// bir nod u parametre olarak alıp contentini siliyor, sonra node un kendisni free ediyor
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

// void del(void *content) {
// 	free(content);
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	t_list *node = ft_lstnew(ft_strdup("abdullah"));
// 	ft_lstdelone(node, del);

// 	printf("%s\n", (char *)node->content);
// 	return 0;
// }
