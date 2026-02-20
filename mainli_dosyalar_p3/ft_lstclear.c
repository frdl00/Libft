#include "libft.h"
//bir listenin hem içeriğini hem nodeları siler
void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	node = *lst;
	while(node)
	{
		tmp = node->next;
		del(node->content);
		free(node);
		node = tmp;
		//bunun yerine node = node.next dersem node u free ettikten
		//sonra node geçersiz memory gösterdiği için undefined behavior olur.
		//olmayan nodeu nextine eşitleyemem
	}
	*lst = NULL;
}

// void del(void *content) {
// 	free(content);
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

// 	while(lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}

// 	ft_lstclear(&lst, del);

// 	if(lst == NULL)
// 		printf("liste tamamen silindi\n");

// 	return 0;
// }
