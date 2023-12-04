/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextosmall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:38:32 by oer-refa          #+#    #+#             */
/*   Updated: 2023/12/04 15:38:35 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_hex2smallx(unsigned long smallx)
{
	char	*arr;
	int		j;
	int		len;
    
    if (smallx == 0)
    {
        ft_putchar('0');
        return (1);
    }
    
}