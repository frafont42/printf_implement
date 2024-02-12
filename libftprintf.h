#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <aio.h>
# include <stdarg.h>

int     ft_checkit(char c);
size_t  ft_strlen(char *str);
int     ft_putchar(char c);
int     ft_putstr(char *s);
int     ft_putex(size_t n, char x);
void    ft_reverse(char *str);
int     ft_n_ex_len(size_t n);
int     ft_putnbr(int n);
int     ft_putptr(unsigned long long add);
int     ft_putptr(unsigned long long add);
int     ft_mother(const char *str, va_list args);
int     ft_printf(const char *mainstr, ...);

#endif