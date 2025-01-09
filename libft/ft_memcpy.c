/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:17:20 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 11:00:12 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src && n > 0)
		return (NULL);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
// int	main(void)
// {
// 	char src1[12], src2[11];
// 	strcpy(src1, "Lydia");
// 	strcpy(src2, "Oscar");

// 	ft_memcpy(src1, src2, 2);
// 	printf("%s\n", src1);
// 	return (0);
// }
