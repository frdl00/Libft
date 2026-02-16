#include "libft.h"
// BİR NODE'u LİSTENİN BAŞINA EKLİYOR
void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(int argc, char const *argv[])
// {
// 	t_list *node = "sus";
// 	t_list **lst = NULL;
// 	ft_lstadd_front(lst, node);

// 	return 0;
// }


