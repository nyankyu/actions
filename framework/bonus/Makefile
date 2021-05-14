NAME=libunit.a
CC=gcc
CFLAGS=-Wall -Werror -Wextra -I$(LIBFT_DIR)
BONUS=0
LIBFT_DIR=../libft
LIBFT=$(LIBFT_DIR)/libft.a
SRCS=\
load_test.c \
test_list.c \
launch_tests.c \
report.c \
print_time.c \
$(LIBFT_DIR)/ft_isdigit.c \
$(LIBFT_DIR)/ft_itoa.c \
$(LIBFT_DIR)/ft_strdup.c \
$(LIBFT_DIR)/ft_strlen.c \
$(LIBFT_DIR)/ft_putchar_fd.c \
$(LIBFT_DIR)/ft_putendl_fd.c \
$(LIBFT_DIR)/ft_putnbr_fd.c \
$(LIBFT_DIR)/ft_memcpy.c \
$(LIBFT_DIR)/ft_putstr_fd.c
OBJS=$(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $?
	cp $@ ..

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
