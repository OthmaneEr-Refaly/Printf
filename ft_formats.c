/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:50:00 by oer-refa          #+#    #+#             */
/*   Updated: 2023/12/01 10:50:05 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_unsigned
// ft_putnbr
// ft_putchar
// ft_putstr
// ft_hex2smallx
// ft_void
// ft_hex2big
// ft_putchar
#include "ft_printf.h"

int	ft_formats(va_list args, char format)
{
    int len;

    len = 0;
    if (format == 'c')
        len+= ft_putcahr(va_args(args), int);
    else if (format == 's')
        len+= ft_putstr(va_args(args), int);
    else if (format == 'p')
        len += ft_void(va_arg(args, void *));
    else if (format == 'd' || format == 'i')
        len += ft_putnbr(va_arg(args, int));
    else if (format == 'u')
        len+= ft_unsigned(va_args(args, unsigned int));
    else if (format == 'x')
        len+= ft_hextosmall(va_args(args, ));
    else if (format == 'X')
        len += ft_hextobig(va_args(args, ));
    else
		len += ft_putchar(format);
    return (len);
}