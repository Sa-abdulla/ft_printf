/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:44:48 by sabdulla          #+#    #+#             */
/*   Updated: 2022/04/07 15:07:31 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

int	ft_parse (va_list ptr, char c)
{
	if (c == 'c')
		return (ft_putchar (va_arg (ptr, int)));
	if (c == 's')
		return (ft_putstr (va_arg (ptr, char *)));
	if (c == 'd' || c == 'i')
		return (ft_print_number (va_arg (ptr, int)));
	if (c == 'x' || c == 'X')
		return (ft_hex (va_arg (ptr, unsigned long int), c));
	if (c == 'u')
		return (ft_putuint(va_arg (ptr, unsigned int)));
	if (c == 'p')
		return (ft_ptr(va_arg (ptr, unsigned long long)));
	if (c == '%')
		return (ft_putchar ('%'));
	return (0);
}

int ft_printf(char *str, ... )
{
	int i = 0;
	int counter = 0;
	va_list ptr;

	va_start (ptr, str);

	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			ft_putchar (str[i]);
			counter++;
		}
		else
		{
			counter += ft_parse (ptr, str[i + 1]);
			i += 1;
		}
		i++;
	}
	va_end (ptr);
	return (counter);
}