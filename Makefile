# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taehokim <taehokim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 12:51:40 by heom              #+#    #+#              #
#    Updated: 2021/07/01 13:25:14 by taehokim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

SRCS = main \
			safe_exit \
			all \
			malloc_fd \
			make_pipe \
			fork_loop \
			utils/px_split \
			utils/px_strlcpy \
			utils/px_strjoin \

MAND_OBJS = $(MAND_FIL:.c=.o)
BONUS_OBJS = $(BONUS_FIL:.c=.o)

MAND_FIL = $(addsuffix .c, $(addprefix mand/, $(SRCS))) \

BONUS_FIL = $(addsuffix _bonus.c, $(addprefix bonus/, $(SRCS))) \


all : $(NAME)

$(MAND_OBJS): %.o : %.c
	gcc $(CFLAGS) -c -o $@ $<


$(NAME) : $(MAND_OBJS)
	gcc $(CFLAGS) $^ -o $@

clean :
	$(RM) $(MAND_OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME) $(NAME)_bonus

bonus: $(NAME)_bonus

$(NAME)_bonus: $(BONUS_OBJS)
	gcc $(CFLAGS) $^ -o $(NAME)_bonus

re: fclean all

.PHONY: all clean fclean re bonus
