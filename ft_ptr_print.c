/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:06:13 by mumujic           #+#    #+#             */
/*   Updated: 2023/01/31 11:06:13 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_mod(size_t numb, int *size)
{
	if (numb >= 16)
	{
		ft_mod(numb / 16, size);
		ft_mod(numb % 16, size);
	}
	else
	{
		if (numb <= 9)
			ft_char_print(numb + '0', size);
		else
			ft_char_print(numb - 10 + 'a', size);
	}
}

void	ft_ptr_print(size_t numb, int *size)
{
	ft_str_print("0x", size);
	if (numb == 0)
		ft_char_print('0', size);
	else
		ft_mod(numb, size);
}

/*ft_ptr_print affiche un pointeur en héxadécimal*/