/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-09 12:53:04 by oscamurg          #+#    #+#             */
/*   Updated: 2025-01-09 12:53:04 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

int	func(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\r' || c == '\f'
		|| c == ' ');
}

static int	hex_digit_value(char c)
{
	if (ft_isdigit((unsigned char)c))
		return (c - '0');
	else
		return (ft_tolower((unsigned char)c) - 'a' + 10);
}

static unsigned long long	calculate_res(const char *s, int i)
{
	unsigned long long	res;
	int					digit;

	res = 0;
	while (s[i] && ishexdigit((unsigned char)s[i]))
	{
		digit = hex_digit_value(s[i]);
		res = res * 16 + digit;
		i++;
	}
	return (res);
}

static int	handle_overflow(unsigned long long res, int neg)
{
	if (res > ULONG_MAX)
	{
		if (neg == -1)
			return (0);
		else
			return (-1);
	}
	return ((int)(res * neg));
}

int	func0(const char *s, int i, int neg)
{
	unsigned long long	res;

	res = calculate_res(s, i);
	return (handle_overflow(res, neg));
}