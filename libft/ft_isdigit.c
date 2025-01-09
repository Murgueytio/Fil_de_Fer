/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:58:08 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:58:08 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= 48) && (c <= 57));
}
/* 
int main(void)
{
	(ft_isdigit('3')) ? (printf("is digit\n")) : (printf("is not digit\n"));
	(ft_isdigit('F')) ? (printf("is digit\n")) : (printf("is not digit\n"));
} */
