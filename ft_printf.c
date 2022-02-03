/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:37:47 by kcetin            #+#    #+#             */
/*   Updated: 2022/02/03 18:51:03 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	kind(char a, va_list args)
{
	int toplam;

	toplam = 0;
	if(a == 'd' || a == 'i')
		toplam += putnbr(va_arg(args, int));
	else if (a == 'c')
		toplam += putchar(a);
	else if (a == 's')
		toplam += strchr(va_arg(args, char *));
	else if (a == '%')
		toplam += putchar('%');
	else if (a == 'u')
		toplam += u_putnbr(va_arg(args, unsigned int))
	
	
	
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
			toplam += kind(s[i++], args);
		else
			toplam += putchar(s[i]);
		i++;

	return (toplam);
}