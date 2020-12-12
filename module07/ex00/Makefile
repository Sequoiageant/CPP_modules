# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 10:39:10 by julnolle          #+#    #+#              #
#    Updated: 2020/12/12 14:50:45 by julnolle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

# ---------------- CC ---------------- #

CC = clang++

CFLAGS +=	-Wall
CFLAGS +=	-Wextra

ifneq ($(err), no)
	CFLAGS += -Werror
endif

CFLAGS +=	-std=c++98

# ---------------- SRC --------------- #

SRCS = main.cpp
SRCS += Fixed.cpp

vpath %.cpp ./

# ---------------- OBJ --------------- #

DIR_OBJS	= ./objs/
OBJS		= $(patsubst %.cpp, $(DIR_OBJS)%.o, $(SRCS))


all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@
# 			echo "$(_BOLD)$(_YELLOW)==> $@ linked$(_END)"

$(OBJS): 	$(DIR_OBJS)%.o: %.cpp whatever.hpp| $(DIR_OBJS)
			$(CC) $(CFLAGS) -c $< -o $@
# 			echo "$(_BOLD)$(_GREEN)--> $@ made$(_END)"

$(DIR_OBJS):
	mkdir -p $@

clean:
	$(RM) -R $(DIR_OBJS)
# 	echo "$(_BOLD)$(_RED)-> $@ $(NAME) made$(_END)"

fclean: clean
	$(RM) $(NAME)
# 	echo "$(_BOLD)$(_RED)-> $@ $(NAME) made$(_END)"

re: fclean
	$(MAKE)

.PHONY:		all fast clean fclean re
# .SILENT:	$(NAME) $(OBJS) $(DIR_OBJS) clean fclean
