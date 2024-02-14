/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:07:11 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/11 17:36:33 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> // Aggiunta per risolvere il warning di printf

char *ft_reverse(char *str)
{
    size_t len;
    char *reversed;
    size_t i;

    len = ft_strlen(str);
    i = 0;
    reversed = (char *)malloc((len + 1) * sizeof(char));
    if (!reversed)
        return NULL;
    while (i < len)
    {
        reversed[i] = str[len - i - 1];
	i++;
    }
    reversed[i] = '\0';
    return reversed;
}
