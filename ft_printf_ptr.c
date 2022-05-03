/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:49:02 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/02 16:36:15 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_printf_ptr(void *ptr)
{
	int	count;

	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	count += ft_printf_hex((size_t)ptr, "0123456789abcdef");
	return (count);
}
