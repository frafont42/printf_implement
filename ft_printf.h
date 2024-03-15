/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:52:18 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/19 15:24:32 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_putchar(char c);
//int		ft_particular(char *str);
int		ft_putstr(char *s);
int		ft_putex(unsigned int n, char *base);
//void	ft_reverse(char *str);
int		ft_n_ex_len(unsigned long int n);
int		ft_putnbr(int n);
int		ft_putuint(unsigned long int n);
int		ft_putptr(unsigned long long add);
int		ft_printadd(unsigned long long add);
int		ft_mother(char c, va_list args);
int		ft_printf(const char *mainstr, ...);

#endif
