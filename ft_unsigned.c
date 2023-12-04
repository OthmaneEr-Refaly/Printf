/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:30:25 by oer-refa          #+#    #+#             */
/*   Updated: 2023/12/03 15:30:27 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_unsigned(unsigned int nbr)
{
    int len;

    len = 0;
    len = ft_count_dec(nbr);
    ft_putnbr(nbr);
    return (len);
}