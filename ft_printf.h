/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:51:06 by kcetin            #+#    #+#             */
/*   Updated: 2022/02/13 12:13:07 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	kind(char a, va_list args);
int	ft_printf(const char *s, ...);
int	ft_print_str(char *str);
int	ft_strlen(const char *s);
int	hex_putnbr(unsigned int n, char *hex);
int	unsigned_putnbr(unsigned int n);
int	ft_point_print(unsigned long n, char *hex);
int	putnbr(int n);
int	ft_putchar(char c);
int	pointer(unsigned long n, char *hex);
int	ft_putstr(char *str);

#endif
