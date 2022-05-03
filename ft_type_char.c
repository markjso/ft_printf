/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:31:34 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 12:49:31 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function is called when ft_printf finds a format specifier.
 * If c matches the format specifier, it calls the corresponding function
 * 

int	ft_type_char(const char c, va_list pf)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(pf, int)));
	if (c == 's')
		return (ft_printf_str(va_arg(pf, char *)));
	if (c == 'i' || c == 'd')
		return (ft_printf_number(va_arg(pf, int)));
	if (c == 'u')
		return (ft_printf_u(va_arg(pf, int)));
	if (c == 'x')
		return (ft_puthex(va_arg(pf, int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_puthex(va_arg(pf, int), "0123456789ABCDEF"));
	if (c == 'p')
		return (ft_printf_ptr(va_arg(pf, void *)));
	if (c == '%')
		return (ft_printf_char('%'));
	else
		return (0);
}
