/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:06:08 by mumujic           #+#    #+#             */
/*   Updated: 2023/01/31 11:06:08 by mumujic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	ft_char_print(int c, int *size);
void	ft_str_print(char *str, int *size);
void	ft_mod(size_t numb, int *size);
void	ft_ptr_print(size_t numb, int *size);
void	ft_base_print(long long int numb, char *format, int base, int *size);
void	ft_uns_print(unsigned int numb, int *size);
void	ft_args(va_list *args, char conv, int *size);

#endif