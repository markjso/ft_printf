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

#include "printf.h"

int	ft_printf_hex(size_t num, char *base)
{
	int		count;

	count = 0;
	if (num >= 16)
		count += ft_printf_hex(num / 16, base);
		count += ft_printf_char((char)(base[num % 16]));
	return (count);
}

int	ft_puthex(unsigned int num, char *base)
{
	return (ft_printf_hex(num, base));
}
