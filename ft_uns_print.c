/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:06:22 by mumujic           #+#    #+#             */
/*   Updated: 2023/01/31 11:06:22 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uns_print(unsigned int numb, int *size)
{
	if (numb >= 10)
		ft_uns_print(numb / 10, size);
	ft_char_print (numb % 10 + '0', size);
}
