/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-09 11:02:05 by oscamurg          #+#    #+#             */
/*   Updated: 2025-01-09 11:02:05 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

SRCF = main.c fdf.c get_next_line/get_next_line.c get_next_line_utils.c\
		fdf_utiles.c bresenhams.c ft_atoi_hex.c ft_atoi_hex_utils.c\
		bresenhams_utiles.c fill_data.c fdf_utiles_helper.c ft_atoi.c\
		ft_strlen.c ft_tolower.c ft_isdigit.c ft_split.c

OBJF = $(SRCF:.c=.o)
RM = rm -f
CC = cc
CFLAGS = -Wall -Werror -Wextra
FDF = fdf

all: $(FDF)

$(FDF): $(LIBFT) $(OBJF)
	$(CC) $(CFLAGS) $(OBJF) -o $(FDF) -lmlx -framework OpenGL -framework AppKit

%.o: %.c fdf.h
	$(CC) -g $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJF)

fclean: clean
	$(RM) $(FDF)

re: fclean all