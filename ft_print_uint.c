/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:43:28 by sabdulla          #+#    #+#             */
/*   Updated: 2022/04/12 15:44:51 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned int num, int *counter)
{
	if (num > 9)
	{
		ft_putnbr(num / 10, counter);
	}
	*counter += ft_putchar((num % 10) + 48 );
}

int	ft_print_unumber(unsigned int num)
{
	int	counter;

	counter = 0;
	ft_putuint(num, &counter);
	return (counter);
}
