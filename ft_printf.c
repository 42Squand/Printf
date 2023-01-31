/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:06:03 by mumujic           #+#    #+#             */
/*   Updated: 2023/01/31 11:06:03 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_args(va_list *args, char conv, int *size)
{
	if (conv == 'c')
		ft_char_print(va_arg(*args, int), size);
	else if (conv == 's')
		ft_str_print(va_arg(*args, char *), size);
	else if (conv == 'p')
		ft_ptr_print(va_arg(*args, size_t), size);
	else if (conv == 'd' || conv == 'i')
		ft_base_print(va_arg(*args, int), "0123456789", 10, size);
	else if (conv == 'u')
		ft_uns_print(va_arg(*args, unsigned int), size);
	else if (conv == 'x' || conv == 'X')
	{
		if (conv == 'x')
			ft_base_print(va_arg(*args, unsigned int),
				"0123456789abcdef", 16, size);
		else
			ft_base_print(va_arg(*args, unsigned int),
				"0123456789ABCDEF", 16, size);
	}
	else if (conv == '%')
		ft_char_print('%', size);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		size;

	va_start(args, str);
	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_args(&args, str[++i], &size);
			i++;
		}
		else
		{
			ft_char_print((char)str[i++], &size);
		}
	}
	va_end(args);
	return (size);
}

