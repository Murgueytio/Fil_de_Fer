/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 14:03:51 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-17 14:03:51 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (len_s + size);
	i = 0;
	while (src[i] && (len_d + i) < (size - 1))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = 0;
	return (len_d + len_s);
}
// int	main(void)
// {
// 	char d[12] = "Lydia and";
// 	const char*s = " Oscar";

// 	size_t r = ft_strlcat(d,s,sizeof(d));

// 	printf("src=%s, dst=%s, ret=%zu\n",s,d,r);
// 	return(0);
// }
