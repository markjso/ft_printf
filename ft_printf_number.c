/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:23:33 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 10:44:27 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_number(int num)
{
	unsigned int	n;
	int				count;

	count = 0;
	if (num < 0)
	{
		count += ft_printf_char('-');
		n = (unsigned int)(num * -1);
	}
	else
		n = (unsigned int)num;
	if (n >= 10)
		count += ft_printf_number(n / 10);
		count += ft_printf_char(n % 10 + '0');
	return (count);
}
