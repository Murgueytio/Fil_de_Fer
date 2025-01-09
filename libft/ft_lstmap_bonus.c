/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-23 13:38:53 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-23 13:38:53 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*node;
	void	*content;

	if (!f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			(*del)(content);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, node);
		lst = lst->next;
	}
	return (res);
}
// #include "libft.h"
// #include <stdio.h>

// void *square(void *content)
// {
//     int *num = (int *)content;
//     int *result = (int *)malloc(sizeof(int));
//     if (!result)
//         return NULL;
//     *result = (*num) * (*num);
//     return result;
// }

// void del(void *content)
// {
//     free(content);
// }

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%d ", *(int *)lst->content);
//         lst = lst->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     t_list *lst = NULL;
//     t_list *mapped_lst;
//     int *num;

//     // Crear lista original
//     for (int i = 1; i <= 5; i++)
//     {
//         num = (int *)malloc(sizeof(int));
//         *num = i;
//         ft_lstadd_back(&lst, ft_lstnew(num));
//     }

//     printf("Lista original: ");
//     print_list(lst);

//     // Aplicar ft_lstmap
//     mapped_lst = ft_lstmap(lst, square, del);

//     printf("Lista mapeada: ");
//     print_list(mapped_lst);

//     // Prueba de manejo de errores
//     t_list *error_lst = ft_lstmap(NULL, square, del);
//     if (error_lst == NULL)
//         printf("Manejo correcto de lista NULL\n");

//     // Liberar memoria
//     ft_lstclear(&lst, del);
//     ft_lstclear(&mapped_lst, del);

//     return (0);
// }
/* #include "libft.h"
#include <stdio.h>

void *square(void *content)
{
    int *num = (int *)content;
    int *result = (int *)malloc(sizeof(int));
    if (result)
        *result = (*num) * (*num);
    return result;
}

void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = NULL;
    t_list *mapped_lst;
    int num;

    // Crear lista original con los números 1 al 5
    for (int i = 1; i <= 5; i++)
    {
        num = i;
        ft_lstadd_back(&lst, ft_lstnew(&num));
    }

    // Aplicar ft_lstmap
    mapped_lst = ft_lstmap(lst, square, del);

    // Mostrar las dos listas
    t_list *current = lst;
    printf("Lista original: ");
    while (current)
    {
        printf("%d ", *(int *)current->content);
        current = current->next;
    }
    printf("\n");

    current = mapped_lst;
    printf("Lista mapeada: ");
    while (current)
    {
        printf("%d ", *(int *)current->content);
        current = current->next;
    }
    printf("\n");

    // Liberar memoria
    ft_lstclear(&lst, del);
    ft_lstclear(&mapped_lst, del);

    return 0;
} */
