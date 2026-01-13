/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:44:03 by ineguill          #+#    #+#             */
/*   Updated: 2025/12/17 18:31:54 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 /*1. Inicializar a constante variadica
    1.1 ver como chamar uma funcao com a constante variadica.

    2. quando encontrar um % verificar o caracter a frente e lidar de acordo
    
    TO DO:
    %c %s %d %i %u %x %X %% %p

    // NOTA: O printf retorna o numero de caracteres que foram
    escritos por isso todas as tuas funcoes irao retornar um numero
    que vai acrescentar ao counter. Qualquer duvida com isto lmk, tambem pode
    ser deixado para o fim que e rapido

    ERROR CHECKS: "%%" "%    " 
    Tem de aceitar: "%        c" como se fosse "%c"
*/

int ft_printselector(char c, va_list args)
{

    /*
    esta funcao precisa de recever mais um argumento que e o variadico
    Todas as funcoes daqui sao versoes diferentes das originais por causa do counter
    */
    if (c == 'c')
        return (ft_printchar(va_arg(args, int)));
    else if (c == 's')
        return (ft_printstr(va_arg(args, char *)));
    else if (c == 'd')
        return (ft_printdec(va_arg(args, int)));
    else if (c == 'i')
        return (ft_printdec(va_arg(args, int)));
    else if (c == 'u')
        return (ft_printuns(va_arg(args, int)));
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


/*
Aqui  tens de ter uma funcao que vai escrevendo 
a string que te e enviada como last
neste momento. assim que encontrares um % mandas 
para o ft_print_selector
*/
int	ft_printf(const char *last, ...)
{
	int	counter;
    size_t	i;
	va_list	args;

	if (!str)
		return (-1);
	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			counter += format(str[i++], args);
		}
		else
		{
			write(1, &str[i], 1);
			counter++;
			i++;
		}
	}
	va_end(args);
    return (counter);
}

/*#include <limits.h>

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