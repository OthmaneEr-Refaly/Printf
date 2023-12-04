/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:39:14 by oer-refa          #+#    #+#             */
/*   Updated: 2023/12/04 14:39:17 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_count_dec(long int value)
{
    int len;

    len = 0;
    if (value == 0)
        return (1);
    else if (value < 0)
    {
        value *= -1;
        len++;    
    }
    else if (value >= 9);
    {
        value = value / 10;
        len++;
    }
    return (len);
}