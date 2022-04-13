/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:32:32 by sabdulla          #+#    #+#             */
/*   Updated: 2022/04/12 15:38:36 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *counter)
{
	if (num == -2147483648)
	{
		ft_putnbr(num / 10, counter);
		ft_putchar('8');
		(*counter)++;
	}
	else if (num < 0)
	{
		ft_putchar('-');
		(*counter)++;
		ft_putnbr(-num, counter);
	}
	else
	{
		if (num > 9)
		{
			ft_putnbr(num / 10, counter);
		}
		ft_putchar((num % 10) + 48 );
		(*counter)++;
	}
}

int	ft_print_number(int num)
{
	int	counter;

	counter = 0;
	ft_putnbr(num, &counter);
	return (counter);
}
