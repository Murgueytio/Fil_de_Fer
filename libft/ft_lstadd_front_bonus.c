/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-23 13:25:39 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-23 13:25:39 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/* int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("Stalker");
	new = ft_lstnew("Andrei Tarkovsky");
	ft_lstadd_front(&lst, new);
	printf("Primer nodo: %s\n", (char *)lst->content);
	printf("Segundo nodo: %s\n", (char *)lst->next->content);
	free(lst->next);
	free(lst);
	return (0);
} */
/*
Compilar: ft_lstnew_bonus.c

	// Crear el primer nodo
    // Crear y añadir el segundo nodo al frente
    // Imprimir los contenidos de los nodos
    // Liberar memoria, para evitar fugas de memoria
*/
