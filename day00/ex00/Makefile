# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 14:29:38 by ashypilo          #+#    #+#              #
#    Updated: 2019/09/30 14:49:19 by ashypilo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
SRCDIR = ./
OBJS = $(addprefix $(SRCDIR), megaphone.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(SRCDIR)%.o: $(SRCDIR)%.cpp
	clang++ $(FLAGS) -c -o $@ $< 

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re