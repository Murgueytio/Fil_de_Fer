/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:57:57 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:57:57 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/// @brief 
/// @param c 
/// @return 
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/* 
int	main(void)
{
	printf("%d\n", ft_isalpha('8'));
	printf("%d\n", ft_isalpha('G'));
}
 */