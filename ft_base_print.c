/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:06:35 by mumujic           #+#    #+#             */
/*   Updated: 2023/01/31 11:06:35 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_base_print(long long int numb, char *format, int base, int *size)
{
	if (numb == -2147483648)
	{
		ft_str_print("-2147483648", size);
		return ;
	}
	if (numb == 0)
	{
		ft_char_print('0', size);
		return ;
	}
	if (numb < 0)
	{
		ft_char_print('-', size);
		ft_base_print((numb * -1), format, base, size);
	}
	else if (numb >= (unsigned int)base)
	{
		ft_base_print(numb / base, format, base, size);
		ft_base_print(numb % base, format, base, size);
	}
	else if (numb < (unsigned int)base)
		ft_char_print(format[numb], size);
}
