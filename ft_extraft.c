/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extraft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:52:58 by sabdulla          #+#    #+#             */
/*   Updated: 2022/04/07 14:53:45 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

int	ft_putchar (char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr (char *str)
{
	int i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar (str[i]);
		i++;	
	}
	return (i);
}
