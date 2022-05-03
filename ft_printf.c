/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:46:13 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 12:25:44 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function takes a format string and a number of arguments from ft_type_char.
 * It uses count to store the total number of characters printed.
 * First if checks if a the character is a format specifier by using '%' 
 * and anything that is not null and then passes the char to ft_type_char
 * which then uses the appropriate function. Second if is used if the character
 * is not a format specifier and uses ft_printf_char to print the string.
 * 

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	pf;

	i = 0;
	count = 0;
	va_start(pf, format);
	while (format[i])
	{
		if (format[i] == '%' && format[++i])
		{
			count += ft_type_char(format[i], pf);
			i++;
		}
		if (format[i] && format[i] != '%')
		{
			ft_printf_char(format[i]);
			i++;
			count++;
		}
	}
	va_end(pf);
	return (count);
}
