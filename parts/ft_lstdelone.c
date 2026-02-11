#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void del(void *content) {
	
}

int main(int argc, char const *argv[])
{
	t_list *node = ft_lstnew("abdullah");



	return 0;
}
