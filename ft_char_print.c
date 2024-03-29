/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:06:31 by mumujic           #+#    #+#             */
/*   Updated: 2023/01/31 11:06:31 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_print(int c, int *size)
{
	write(1, &c, 1);
	(*size)++;
}

/* écrit un charactère et incrémente size*/