/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:43:28 by sabdulla          #+#    #+#             */
/*   Updated: 2022/04/07 15:15:10 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

int ft_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char *num;
	int i;

	i = ft_len(n);
	num = (char *)malloc(sizeof(char) * (i + 1));
	if (!num)
		return (0);
	num[i] = '\0';
	while (n != 0)
	{
		num[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (num);
}

int ft_putuint (unsigned int num)
{
	int print_int;
	char	*n;

	n = 0;
	print_int = 0;
	if (n == 0)
		print_int = print_int + write(1, "0", 1);
	else
	{
		n = ft_uitoa(num);
		print_int = print_int + ft_putstr(n);
		free(n);
	}
	return (print_int);
}