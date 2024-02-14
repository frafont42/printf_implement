/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:52:18 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/14 13:21:50 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <aio.h>
# include <stdarg.h>
# include <limits.h>

int		ft_checkit(char c);
size_t	ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putex(size_t n);
int		ft_putexx(size_t n);
void	ft_reverse(char *str);
int		ft_n_ex_len(size_t n);
int		ft_putnbr(int n);
int     ft_putuint(unsigned int n);
int		ft_putptr(unsigned long long add);
int		ft_mother(char c, va_list args);
int		ft_printf(const char *mainstr, ...);

#endif
