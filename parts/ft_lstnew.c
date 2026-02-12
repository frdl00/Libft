#include "libft.h"
// verilen content değeri ile YENİ BİR NODE OLUŞTURUYOR.
t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if(!new_node)
		return (NULL);

	new_node->content = content;
	new_node->next = NULL;

	return (new_node);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = "sandviç";
// 	t_list *result = ft_lstnew(str);
// 	printf("content: %s\n", (char *)result->content);
// 	printf("next: %s\n", (void *)result->next);
// }


