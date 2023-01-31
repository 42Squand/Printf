/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:06:16 by mumujic           #+#    #+#             */
/*   Updated: 2023/01/31 11:06:16 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_str_print(char *str, int *size)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		(*size) += 6;
		return ;
	}
	while (str[i])
	{
		ft_char_print(str[i++], size);
	}
}
