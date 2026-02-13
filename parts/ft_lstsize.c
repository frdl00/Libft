#include "libft.h"
// listenin size'ını döndürüyor
int ft_lstsize(t_list *lst)
{
	int lst_size;
	lst_size = 0;

	while(lst != NULL)
	{
		lst_size++;
		lst = lst->next;
	}
	return (lst_size);
}
/*
1. boş bir liste oluştur
2. üç tane node (eleman) oluştur
3. node^ları listeye ekle
4. ft_lstsize() çağır
*/
// #include <stdio.h>
// int main()
// {
// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew("sayi1");
// 	t_list *node2 = ft_lstnew("sayi2");
// 	t_list *node3 = ft_lstnew("sayi3");

// 	ft_lstadd_front(&lst, node1);
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node3);

// 	int result = ft_lstsize(lst);
// 	printf("lst size: %d\n", result);
// }


