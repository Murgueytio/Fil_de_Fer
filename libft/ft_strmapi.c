/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 14:04:18 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-17 14:04:18 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	res = malloc (sizeof(char) * (len + 1));
	if (res == NULL)
		return (res);
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
// char Lyd(unsigned int i, char c)
// {
//     return (c + i);
// }

// int main(void)
// {
//     char *s;
//     char *result;

//     s = "Lydia";
//     result = ft_strmapi(s, Lyd);
//     printf("(\"%s\") = %s\n", s, result);
//     free(result);
// }
/* 
Para que funcione main.c

ft_strlen(const char *s)

*/