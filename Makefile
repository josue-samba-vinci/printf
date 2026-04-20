NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_percent.c ft_printf.c ft_putchar.c ft_putnbr_base_address.c\
		ft_putnbr_base_lowercase.c ft_putnbr_base_uppercase.c ft_putnbr_unsigned.c\
		ft_putnbr.c ft_putstr.c ft_type.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o:	%.c ft_printf.h
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all