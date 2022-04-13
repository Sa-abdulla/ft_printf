/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:54:21 by sabdulla          #+#    #+#             */
/*   Updated: 2022/04/12 15:35:39 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(int num)
{
	int	len;

	len = 0;
	if (!num)
		return (0);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_puthex(unsigned int num, const char format, int *counter)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, format, counter);
		ft_puthex(num % 16, format, counter);
	}
	else
	{
		if (num <= 9)
			*counter += ft_putchar(num + '0');
		else
		{
			if (format == 'x')
				*counter += ft_putchar(num - 10 + 'a');
			if (format == 'X')
				*counter += ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_hex(unsigned int num, const char format)
{
	int	counter;

	counter = 0;
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, format, &counter);
	return (counter);
}
