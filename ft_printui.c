/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printui.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:51:14 by marvin            #+#    #+#             */
/*   Updated: 2026/01/13 16:51:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printui(unsigned int n)
{
	unsigned int	nb;
	int				count;

	nb = n;
	count = 0;
	if (nb > 9)
		count += ft_printui(nb / 10);
	count += ft_printchar((nb % 10) + '0');
	return (count);
}
