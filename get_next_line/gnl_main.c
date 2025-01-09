/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-15 15:18:35 by oscamurg          #+#    #+#             */
/*   Updated: 2024-11-15 15:18:35 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd1 = open("test1.txt", O_RDONLY);
	if (fd1 == -1)
	{
		printf("Error opening file\n");
		return (1);
	}

	int	fd2 = open("test3.txt", O_RDONLY);
	if (fd2 == -1)
	{
		printf("Error opening file\n");
		return (1);
	}

	char	*line;
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	close(fd2);
	close(fd1);
	return (0);
}

