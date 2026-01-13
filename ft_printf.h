/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:45:46 by ineguill          #+#    #+#             */
/*   Updated: 2025/12/17 18:27:55 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdint.c>
# include <string.h> 
# include <unistd.h>
# include <stdrag.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_printchar(char c);
int	ft_printdec(int n);
int	ft_printhex(unsigned int n, int up);
int	ft_printptr(void *ptr);
int	ft_printstr(char *str);
int	ft_printui(unsigned int n);

#endif