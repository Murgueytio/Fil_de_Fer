/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 14:05:21 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-17 14:05:21 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	set_contains(char c, char const *set)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	while (set_contains(*(s1 + i), set))
		i++;
	j = ft_strlen(s1) - 1;
	while (set_contains(*(s1 + j), set))
		j--;
	if (i > j)
		return (ft_strdup(""));
	res = ft_substr(s1, i, (j - i + 1));
	if (res == NULL)
		return (NULL);
	return (res);
}

// int	main(void)
// {
// 	char	*str1;

// 	str1 = ft_strtrim("--__-___----4-_-2-___---__-_-__--", "-_");
// 	printf("%s\n", str1);
// }
/* Para que funcione main.c

ft_strlen ft_strchr ft_strlcpy

*/