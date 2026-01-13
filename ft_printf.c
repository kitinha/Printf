/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:44:03 by ineguill          #+#    #+#             */
/*   Updated: 2026/01/13 21:12:10 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printselector(char c, va_list args)
{
	if (c == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (c == 'd')
		return (ft_printdec(va_arg(args, int)));
	else if (c == 'i')
		return (ft_printdec(va_arg(args, int)));
	else if (c == 'u')
		return (ft_printui(va_arg(args, int)));
	else if (c == 'x')
		return (ft_printhex(va_arg(args, unsigned int), c));
	else if (c == 'X')
		return (ft_printhex(va_arg(args, unsigned int), c));
	else if (c == '%')
		return (write(1, "%%", 1));
	else if (c == 'p')
		return (ft_printptr(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *last, ...)
{
	int		counter;
	size_t	i;
	va_list	args;

	if (!last)
		return (-1);
	i = 0;
	counter = 0;
	va_start(args, last);
	while (last[i])
	{
		if (last[i] == '%')
		{
			i++;
			counter += ft_printselector(last[i++], args);
		}
		else
		{
			write(1, &last[i], 1);
			counter++;
			i++;
		}
	}
	va_end(args);
	return (counter);
}

/* #include <limits.h>

 int	main(void)
{
	// ft_printf
	printf("--------------------\n");
	printf("Testing ft_printf...\n");
	printf("--------------------\n");
	// ft_printf("%s --> %d --> %i -->\n", "done", 42, 25);
	ft_printf("%d\n", ft_printf("%s %i %u %%\n %x %X\n", "ok", 45, UINT_MAX,
			255000, 255));

	// Original ptintf
	printf("--------------------\n");
	printf("Original printf...\n");
	printf("--------------------\n");
	// printf("%s --> %d --> %i -->\n", "done", 42, 25);
	printf("%d\n", printf("%s %i %u %%\n %x %X\n", "ok", 45, UINT_MAX, 255000,
			255));
	return (0);
} */
/*
#include <limits.h>

int	main(void)
{
	unsigned long x;

	x = LONG_MIN;

	// Original
	printf("%p %p\n", LONG_MIN, LONG_MAX);

	// ft_printf
	ft_printf("%p %p\n", LONG_MIN, LONG_MAX);
} */