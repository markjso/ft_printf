/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:37:40 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 10:34:33 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function takes a number and the char representing the format type (x or X)
 * We check to see if num is >= sixteen and recursively call ft_printf_hex until
 * num is 0. We use ft_printf_char to write the relavant hexadecimal character 
 * (upper or lower case depending on base) of the % of sixteen at each call. 
 * We then return the count to ft_printf.
 *
 * Lastly we use the function ft_puthex to write the hexadecimal version of num.

int	ft_printf_hex(size_t num, char *base)
{
	int		count;

	count = 0;
	if (num >= 16)
		count += ft_printf_hex(num / 16, base);
		count += ft_printf_char(base[num % 16]);
	return (count);
}

int	ft_puthex(unsigned int num, char *base)
{
	return (ft_printf_hex(num, base));
}
