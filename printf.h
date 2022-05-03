/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:13:53 by jmarks            #+#    #+#             */
/*   Updated: 2022/05/03 12:46:01 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf_char(char c);
int		ft_printf_str(char *s);
int		ft_printf_number(int num);
int		ft_printf_hex(size_t num, char *base);
int		ft_puthex(unsigned int num, char *base);
int		ft_printf(const char *format, ...);
int		ft_type_char(const char c, va_list pf);
int		ft_printf_ptr(void *ptr);
int		ft_printf_u(unsigned int num);

#endif
