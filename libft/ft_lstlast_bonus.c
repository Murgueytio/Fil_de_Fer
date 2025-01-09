/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 13:59:21 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-17 13:59:21 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*res;

	if (!lst)
		return (NULL);
	while (lst)
	{
		res = lst;
		lst = lst->next;
	}
	return (res);
}
// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*bonus4last;

// 	node1 = ft_lstnew(ft_strdup("First node"));
// 	node2 = ft_lstnew(ft_strdup("Second node"));
// 	node3 = ft_lstnew(ft_strdup("Third node"));

// 	if (!node1 || !node2 || !node3)
// 	{
// 		printf("Error: failed to allocate memory for nodes\n");
// 		return (1);
// 	}

// 	node1->next = node2;
// 	node2->next = node3;

// 	bonus4last = ft_lstlast(node1);

// 	printf("The first node is: '%s'\n", (char *)node1->content);
// 	printf("The last node is: '%s'\n", (char *)bonus4last->content);

// 	return (0);
// }
/*
	// Crear los nodos de la lista
	// Verificar que los nodos fueron creados correctamente
	// Enlazar los nodos entre sí
	// Obtener el último nodo de la lista
	// Imprimir el contenido del primer nodo y del último nodo
	// Liberar la memoria asignada
	free(node1->content);
	free(node2->content);
	free(node3->content);
	free(node1);
	free(node2);
	free(node3);

*/