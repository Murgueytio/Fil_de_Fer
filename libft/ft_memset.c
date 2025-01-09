/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:56:53 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:56:53 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	s[55];
//I have included "strcpy" because it requires me to separate statements.
//But, "strcpy" isn't in "libft.h".
	strcpy(s, "I'm Bond, James Bond");
	ft_memset(s +3, 'M', 10);
	printf("%s\n", s);
}*/