/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 14:23:53 by marvin            #+#    #+#             */
/*   Updated: 2025/12/29 14:23:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int ft_strlen(char *str)
{
    int i = 0;
    
    while (str[i])
        i++;
    return (i);
}

int ft_putnbr_base(long long nbr, char *base)
{
    int count;
    int base_len;

    count = 0;
    base_len = ft_strlen(base);
    if (nbr < 0)
    {
        count += ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= base_len)
        count += ft_putnbr_base(nbr / base_len, base);
    count += ft_putchar(base[nbr % base_len]);
    return (count);
}