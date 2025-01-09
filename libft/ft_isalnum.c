/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:57:37 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:57:37 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/* 
int	main(void)
{
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum('%'));
}

For it to work main.c
cc -Wall -Wextra -Werror ft_isalnum.c ft_isalpha.c ft_isdigit.c && ./a.out */