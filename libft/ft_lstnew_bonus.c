/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-23 13:23:01 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-23 13:23:01 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// int	main(void)
// {
// 	char	*content;
// 	t_list	*new_node;

// 	content = "Hola mundo";
// 	new_node = ft_lstnew(content);
// 	if (new_node)
// 	{
// 		printf("Contenido: %s\n", (char *)new_node->content);
// 		free(new_node);
// 	}
// 	return (0);
// }
