/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-23 13:33:36 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-23 13:33:36 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/* void	del(void *content)
{
	// Función de ejemplo para liberar contenido
	free(content);
}

int	main(void)
{Murgueytio/Buchhandlungen_42
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last_node;
	int		size;

	// Crear nodos
	node1 = ft_lstnew(ft_strdup("First node"));
	node2 = ft_lstnew(ft_strdup("Second node"));
	node3 = ft_lstnew(ft_strdup("Third node"));

	if (!node1 || !node2 || !node3)
	{
		printf("Error: failed to allocate memory for nodes\n");
		return (1);
	}

	// Añadir node2 al principio de la lista (node2 -> node1)
	ft_lstadd_front(&node1, node2);

	// Añadir node3 al final de la lista (node2 -> node1 -> node3)
	ft_lstadd_back(&node1, node3);

	// Mostrar el tamaño de la lista
	size = ft_lstsize(node1);
	printf("Size of the list: %d\n", size);

	// Obtener y mostrar el último nodo
	last_node = ft_lstlast(node1);
	printf("Last node content: %s\n", (char *)last_node->content);

	// Eliminar el nodo3 (último nodo) de la lista
	ft_lstdelone(node3, del);
	size = ft_lstsize(node1);
	printf("Size after deleting last node: %d\n", size);

	// Limpiar la lista y liberar memoria
	ft_lstclear(&node1, del);
	if (!node1)
	{
		printf("The list is now empty.\n");
	}

	return (0);
}
For it to work main.c
cc -Wall -Wextra -Werror
ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_strdup.c
ft_strlen.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstsize_bonus.c
ft_lstclear_bonus.c
&& ./a.out

 */