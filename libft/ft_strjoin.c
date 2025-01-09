/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 14:08:34 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 14:08:34 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	size = 1 + ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc(size * sizeof(char));
	if (res == 0)
		return (0);
	ft_strlcpy(res, s1, size);
	ft_strlcat(res, s2, size);
	return (res);
}
/* int	main(void)
{
	char *s1;
	s1 = ft_strjoin("Ly", "dia");
	printf("%s\n", s1);
	//printf("%lu\n", strlen(s1));
} */
