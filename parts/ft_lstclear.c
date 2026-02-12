#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{

	t_list *node = *lst;
	while(node)
	{
		del(node->content);
		free(node);
		node = node->next;
	}

	*lst = NULL;
	
}

void del(void *content) {
	free(content);
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	t_list **lst;

	t_list *node = ft_lstnew(ft_strdup("abdullah"));
	t_list *node1 = ft_lstnew(ft_strdup("blabla"));
	t_list *node2 = ft_lstnew(ft_strdup("aalbalb"));
	ft_lstadd_back(lst, node);
	ft_lstadd_back(lst, node1);
	ft_lstadd_back(lst, node2);

	ft_lstclear(lst, del);

	printf("%s\n", (char *)node->content);
	return 0;
}