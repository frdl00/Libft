#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *node;

	if (!lst || !(*lst))
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while(node->next != NULL) {
		node = node->next;
	}
	node->next = new;
}


#include <stdio.h>
int main()
{
	t_list *lst = NULL;

	t_list *node1 = ft_lstnew("sayi1");
	t_list *node2 = ft_lstnew("sayi2");
	t_list *node3 = ft_lstnew("sayi3");

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	// döngü ile listeyi yazdırma
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}
