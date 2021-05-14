NAME=libunit.a
CC=gcc
CFLAGS=-Wall -Werror -Wextra -I$(LIBFT_DIR)
BONUS=0
LIBFT_DIR=libft
LIBFT=$(LIBFT_DIR)/libft.a
SRCS=\
load_test.c \
test_list.c \
launch_tests.c \
libft/ft_isdigit.c \
libft/ft_itoa.c \
libft/ft_strdup.c \
libft/ft_strlen.c \
libft/ft_putchar_fd.c \
libft/ft_putendl_fd.c \
libft/ft_putnbr_fd.c \
libft/ft_memcpy.c \
libft/ft_putstr_fd.c
OBJS=$(SRCS:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus:
	make -C bonus
