/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 14:03:38 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-17 14:03:38 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*(s + i))
	{
		f(i, s + i);
		++i;
	}
}
// void Lyd(unsigned int i, char *c)
// {
//     *c = *c + i;
// }

// int main(void)
// {
//     char s[] = "Lydia";

//     ft_striteri(s, Lyd);
//     printf("(\"Lydia\") = %s\n", s);
// }
