/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:54:54 by sabdulla          #+#    #+#             */
/*   Updated: 2022/04/07 15:13:00 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_putchar (char c);
int		ft_putstr (char *str);
void	ft_putnbr(int num, int *counter);
int		ft_hexlen (int num);
void	ft_puthex (unsigned int num, const char format);
int		ft_hex (unsigned int num, const char format);
int		ft_len (unsigned int num);
char	*ft_uitoa (unsigned int n);
int		ft_putuint (unsigned int num);
int		ft_ptrlen (int num);
void	ft_putptr (unsigned long long num);
int		ft_ptr (unsigned long long int ptr);
int		ft_parse (va_list ptr, char c);
int		ft_printf (char *str, ... );
int		ft_print_number(int num);

#endif
