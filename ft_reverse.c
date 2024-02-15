/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:07:11 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/15 13:12:40 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> // Aggiunta per risolvere il warning di printf

void	ft_reverse(char *str)
{
	size_t	len;
	size_t	i;
	char	cuscinetto;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		cuscinetto = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = cuscinetto;
		i++;
	}
}
