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

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdrag.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr_base(unsigned int nbr, char *base, int total);
int	ft_putnbr(int n, int total);

#endif