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

/* fonctionement de va_arg
il faut d'abord créer une va_list (args dans l'exemple)
les ... sont appelez ellipses et servent à indiquer que la fonction peut prendre un nombre variable d'argument exemple : %d, %s %x etc...
va_start initialise la va_list (args) et prend la valeur donner dans str.
va_end spécifie la fin de l'utilisation des arguments ( permet de libérer les ressources) (provoque des memory leak si pas utilisée).
i = parcour la chaine 
size = retourne la taille de la sortie

hexadécimal les chiffre allant de 10 à 15 sont représenter par ABCDEF ou abcdef
calcul exemple :
valeur 123:
123 / 16 = 7,6875 on garde 7
123 % 16 = 11 on obtient B ou b
résulat hexadécimal : 7B ou 7b c'est la même chose la majuscule n'a aucune incidence (dépend de x ou X)

base 10 = 0123456789
base 16 = 0123456789abcdef ou 0123456789ABCDEF

*/