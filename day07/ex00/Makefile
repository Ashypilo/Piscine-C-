# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 11:26:02 by ashypilo          #+#    #+#              #
#    Updated: 2019/10/10 15:28:57 by ashypilo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRC = whatever.cpp
SRCDIR = ./
OBJS = $(addprefix $(SRCDIR), $(SRC:.cpp=.o))
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