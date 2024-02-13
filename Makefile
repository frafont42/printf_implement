NAME = libftprintf.a
HEADER = ft_printf.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS			=	ft_strlen.c ft_checkit.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_n_ex_len.c ft_reverse.c ft_putptr.c ft_putex.c ft_putexx.c ft_mother.c ft_printf.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ 

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
