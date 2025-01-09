/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 14:18:35 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 14:18:35 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char			nbr;
	long long int	n;

	n = nb;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	nbr = '0' + (n % 10);
	write(fd, &nbr, 1);
}
/* int	main(void)
{
	ft_putnbr_fd(-007, 1);
	printf("\n");
} */