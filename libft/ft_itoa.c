/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 14:10:01 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 14:10:01 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	numstrlen(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		++i;
	}
	while (n > 0)
	{
		++i;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*res;
	int			i;

	num = n;
	i = numstrlen((long int) n);
	res = (char *) malloc((i + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[i--] = '\0';
	if (num < 0)
	{
		*res = '-';
		num *= -1;
	}
	if (num == 0)
		*res = '0';
	while (num > 0)
	{
		res[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
/* int main(void)
{
	int n;
	char *result;

	n = 111;
	result = ft_itoa(n);
	printf("ft_itoa(%d) = %s\n", n, result);
} */