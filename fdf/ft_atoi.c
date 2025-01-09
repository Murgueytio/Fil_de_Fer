/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-09 12:51:22 by oscamurg          #+#    #+#             */
/*   Updated: 2025-01-09 12:51:22 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"
#include <string.h>

static int	func_atoi(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\r' || c == '\f');
}

static int	func_atoi_0(const char *s, int i, int neg)
{
	unsigned long long	res;
	int					digitnbr;

	res = 0;
	digitnbr = 0;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		digitnbr++;
		if (digitnbr == 20)
		{
			if (neg == -1)
				return (0);
			else
				return (-1);
		}
		res = (res * 10) + (s[i++] - '0');
	}
	if (res > LONG_MAX)
	{
		if (neg == -1)
			return (0);
		else
			return (-1);
	}
	return (((int)res) * neg);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	neg;

	i = 0;
	neg = 1;
	while (s[i] && (s[i] == ' ' || func_atoi(s[i])))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			neg *= -1;
		i++;
	}
	while (s[i] && s[i] == '0')
		i++;
	return (func_atoi_0(s, i, neg));
}