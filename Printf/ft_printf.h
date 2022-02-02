/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:47:23 by mvolpi            #+#    #+#             */
/*   Updated: 2022/01/28 10:48:29 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	udi_tr(const char *str, va_list list, int *r);
void	string_tr(const char *str, va_list list, int *r);
void	hex_tr(const char *str, va_list list, int *r);
void	ft_putnbr(int nb, int *r);
int		ft_printf(const char *str, ...);
void	ft_hex(unsigned int x, int i, int *r);
void	ft_hexp(unsigned long x, int *r);
void	unsigned_tr(unsigned int n, int *r);
void	ft_check(const char *str, va_list list, int *j, int i);

#endif