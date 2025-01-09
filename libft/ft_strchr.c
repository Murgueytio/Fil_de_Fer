/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 14:02:57 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-17 14:02:57 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		++i;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
// int	main(void)
// {
// 	char *p;
// 	p = ft_strchr("Canchapalca Oxapampa", 'p');
// 	printf("%s\n", p);
// }