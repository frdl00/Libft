#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    //orijinal listeyi bozmadan yeni bir listeye f 
    //fonksiyonundan geçirdiğin node contentlerini sırayla ekle
    t_list *new_list; //bu listenin kendisi değil istenin başını tutuyor  sonra sen diğer elemanlara ulaşmak için next'i kullanıyorsun
    //burada list listenin kendisi değil head pointerı yani ilk node'un adresini tutar
    // **lst headpointerın adresini tutuyor (ne gerek var buna allah aşkına ya)
    // **lst e şu yüzden gerek varmış, eğer headi değiştirmek istersem lazım oluyorumş (*lst = new _node gibi)
    t_list *new_node;
    void *new_content;

    if (!lst || !f || !del)
		return (NULL); //burayı sonradan ekledim

    new_list = NULL;
    while(lst);
 
    while(lst)
    {
        new_content = f(lst->content);
        new_node = ft_lstnew(new_content);
       
        //sırayla tüm contentleri gezerek f fonksşyonundan geçiriyorsun
        //sora contentleri yeni nodelara atıyorsun
        //nodeları yeni listeye ekliyorsun
        //f fonksiyonunda malloc kullanma ihtimalin var ve lstnew de malloc kullanıyorsun bu yüzden hata kontrolü yapıp free kullanman gerek

        //neden  new_node u kontrol ediyoum da new_contenti etmiyorum
        if(!new_node)
        {
            del(new_node->content);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}

// void *f(void *content)
// {
//     char *str;
//     char *new;
//     int i;

//     str = (char *)content;
//     new = ft_strdup(str);

//     if(!new)
//         return NULL;
//     i = 0;
//     while(new[i])
//     {
//         new[i] = ft_toupper(new[i]);
// 		i++;
//     }
//     return (new);
// }

// void del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list	*lst;
// 	t_list	*new_lst;
// 	t_list	*tmp;

//     lst = ft_lstnew(ft_strdup("hello"));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));

//     new_lst = ft_lstmap(lst, f, del);

//     tmp = new_lst;
//     while(tmp)
//     {
//         printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
//     }

//     ft_lstclear(&lst, del);
// 	ft_lstclear(&new_lst, del);

// 	return (0);
// }
