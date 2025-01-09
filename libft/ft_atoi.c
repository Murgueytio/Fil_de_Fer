/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:57:18 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:57:18 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
r	variable para almacenar el resultado final.
s   multiplicador que determina el signo del número.
i   índice para recorre la cadena de caracteres.
*/
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	r;
	int	s;
	int	i;

	r = 0;
	s = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = (r * 10) + (nptr[i] - '0');
		i++;
	}
	return (r * s);
}
// int main(void)
// {
//     printf("%d\n", ft_atoi("	-484"));
//     return (0);
// }
