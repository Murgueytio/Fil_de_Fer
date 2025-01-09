/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 10:44:21 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 10:44:21 by oscamurg         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char s[50];
// 	strcpy(s, "Lydia y Oscar");;
// 	printf("%p\n", ft_memchr(s, 'O', 1));
// 	printf("%s\n", s);
// }