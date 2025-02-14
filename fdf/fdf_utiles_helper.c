/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_utiles_helper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-09 12:02:51 by oscamurg          #+#    #+#             */
/*   Updated: 2025-01-09 12:02:51 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

int	min_calcul(int x, int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

void	allocate_data(struct s_points ***data, char *argv)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	y = 0;
	x = 0;
	count_rows_coluns(&x, &y, argv);
	*data = malloc(y * sizeof(struct s_points *));
	if (*data == NULL)
		exit(1);
	while (i < y)
	{
		(*data)[i] = malloc(x * sizeof(struct s_points));
		if ((*data)[i] == NULL)
			exit(1);
		i++;
	}
	data[0][0]->max_x = x;
	data[0][0]->max_y = y;
}

int	ishexdigit(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A'
			&& c <= 'F'));
}

int	ft_custom_strchr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ',')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}