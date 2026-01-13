/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:03:50 by marvin            #+#    #+#             */
/*   Updated: 2026/01/13 20:58:16 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, int up)
{
	char	*lower;
	char	*upper;
	char	*base;
	int		count;

	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	count = 0;
	if (up == 'X')
		base = upper;
	else
		base = lower;
	if (n >= 16)
		count += ft_printhex(n / 16, up);
	count += ft_printchar(base[n % 16]);
	return (count);
}
