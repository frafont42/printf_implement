/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:52:14 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/13 20:22:33 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putex(size_t n)
{
    char *base;
    char *n_ex;
    int l_ex;
    int i;

    l_ex = ft_n_ex_len(n);
    if (l_ex < 0)
        return (0);
    i = 0;
    base = "0123456789abcdef";
    n_ex = (char *)malloc(sizeof(char) * (l_ex + 1));
    if (!n_ex)
        return (0);
    n_ex[i] = '0';
    while (n > 0)
    {
        n_ex[i] = base[n % 16];
        n = n / 16;
        i++;
    }
    ft_reverse(n_ex);
    l_ex = ft_putstr(n_ex);
    free(n_ex);
    return (l_ex);
}

