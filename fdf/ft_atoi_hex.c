/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-09 12:52:22 by oscamurg          #+#    #+#             */
/*   Updated: 2025-01-09 12:52:22 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi_hex(const char *hexaString)
{
	struct s_atoi	var;

	var.i = 0;
	var.length = ft_strlen(hexaString);
	var.startindex = 0;
	if (var.length > 1 && hexaString[0] == '0' && (hexaString[1] == 'x'
			|| hexaString[1] == 'X'))
		var.startindex = 2;
	var.decimalnumber = 0;
	while (var.i < var.length)
	{
		var.currentchar = hexaString[var.i];
		if (var.currentchar >= '0' && var.currentchar <= '9')
			var.digitvalue = var.currentchar - '0';
		else if (var.currentchar >= 'A' && var.currentchar <= 'F')
			var.digitvalue = var.currentchar - 'A' + 10;
		else if (var.currentchar >= 'a' && var.currentchar <= 'f')
			var.digitvalue = var.currentchar - 'a' + 10;
		var.decimalnumber += var.digitvalue * pow(16, var.length - var.i - 1);
		var.i++;
	}
	return (var.decimalnumber);
}