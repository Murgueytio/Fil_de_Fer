/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 14:00:32 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-17 14:00:32 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/* int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		size;

	node1 = ft_lstnew(ft_strdup("First node"));
	node2 = ft_lstnew(ft_strdup("Second node"));
	node3 = ft_lstnew(ft_strdup("Third node"));

	if (!node1 || !node2 || !node3)
	{
		printf("Error: failed to allocate memory for nodes\n");
		return (1);
	}

	node1->next = node2;
	node2->next = node3;

	size = ft_lstsize(node1);
	printf("The size of the list is: '%d'\n", size);

	return (0);
} */
/*
	// Crear tres nodos con contenido dinámico
	// Salir con código de error si hay problemas de memoria
	// Enlazar los nodos
	// Calcular el tamaño de la lista

	// Compilar
	// ft_strlen.c ft_lstnew_bonus.c ft_lstlast_bonus.c 
	// ft_strdup.c ft_lstadd_front_bonus.c && ./a.out

	// Liberar memoria
	// free(node1->content);
	// free(node2->content);
	// free(node3->content);
	// free(node1);
	// free(node2);
	// free(node3);
*/