/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:18:58 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 11:00:08 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src && len > 0)
		return (NULL);
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			*(char *)(dst + i - 1) = *(char *)(src + i - 1);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
// int	main(void)
// {
// 	char src1[50], src2[50];
// 	strcpy(src1, "Lydia");
// 	strcpy(src2, "Oscar");

// 	ft_memmove(src1, src2, 1);
// 	printf("%s\n", src1);
// 	return (0);
// }
