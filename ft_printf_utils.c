/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:56:44 by kcetin            #+#    #+#             */
/*   Updated: 2022/02/03 19:07:44 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	putstr(char *s)
{
	int	i;

	i = strlen(s);
	write(1, s, i);
}

void	putnbr(int i)
{
	if (i < 0)
	{
		putchar('-');
		i = -i;
	}
	if (i >= 10)
	{
		putnbr(i / 10);
		putnbr(i % 10);
	}
	else
		putchar(i + '0');
}

//pointer eksik

void	u_putnbr(unsigned int i)
{
	if (i >= 10)
	{
		putnbr(i / 10);
		putnbr(i % 10);
	}
	else
		putchar(i + '0');
}