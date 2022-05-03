/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:09:33 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 11:11:53 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_u(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_printf_number(num / 10);
		count += ft_printf_char(num % 10 + '0');
	return (count);
}
