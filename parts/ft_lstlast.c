#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
	while(lst->next)
		lst = lst->next;
	return(lst);
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	t_list *lst = NULL;

	t_list *node1 = ft_lstnew("sayi1");
	t_list *node2 = ft_lstnew("sayi2");
	t_list *node3 = ft_lstnew("sayi3");

	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);

	t_list *result = ft_lstlast(lst);
	printf("content : %s\n", (char *)result->content);
	// printf("next: %s\n", (void *)lst->next);
	return 0;
}

