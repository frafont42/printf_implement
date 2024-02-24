NAME = libftprintf.a
HEADER = ft_printf.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS			=	ft_putnbr.c \
					ft_putstr.c \
					ft_putchar.c \
					ft_n_ex_len.c \
					ft_putptr.c \
					ft_putex.c \
					ft_mother.c \
					ft_printadd.c\
					ft_printf.c \
					ft_putuint.c \

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
