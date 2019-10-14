# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 18:39:41 by ashypilo          #+#    #+#              #
#    Updated: 2019/10/10 10:58:49 by ashypilo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
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