/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:03:47 by marvin            #+#    #+#             */
/*   Updated: 2026/01/13 16:03:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbase(unsigned long n)
{
	char	*lower;
	int		count;

	lower = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_printnbase(n / 16);
	count += ft_printchar(lower[n % 16]);
	return (count);
}

int	ft_printptr(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	else
	{
		count += ft_printstr("0x");
		count += ft_printnbase((unsigned long)ptr);
	}
	return (count);
}