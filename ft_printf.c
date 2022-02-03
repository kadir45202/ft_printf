/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:37:47 by kcetin            #+#    #+#             */
/*   Updated: 2022/02/03 15:45:59 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	kind(char a, va_list args)
{
	int toplam;

	toplam = 0;
	if(a == 'd')
		toplam += putnbr(va_arg(args, int));
	else if (a == 'c')
		toplam += ft_putchar(s);
	
	return (toplam);
}

int ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int toplam;

	toplam = 0;
	i = 0;
	va_start(args,s);
	while(s[i] != '\0')
		if (s[i] == '%')
		{
			toplam += kind(s[i++], args);
		}
		else
			toplam += ft_putchar(s[i]);
		i++;

	return (toplam);
}