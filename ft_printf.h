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

#ifndef PRINTF.H
# define PRINTF.H

# include
# include

int	ft_printf(const char *str, ...);
int	ft_putnbr_base(unsigned int nbr, char *base, int total);
int	ft_putpt(unsigned long int nbr, char *base, int total);
int	ft_putnbr(int n, int total);
int	ft_putunbr(unsigned int n, int total);

#endif