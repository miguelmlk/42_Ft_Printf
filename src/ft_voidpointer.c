/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidpointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimalek <mimalek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:01:48 by mimalek           #+#    #+#             */
/*   Updated: 2025/06/25 18:36:45 by mimalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_void(void *ptr)
{
	int	printed;
	int	output;

	printed = 2;
	if (ptr == NULL)
	{
		output = ft_printstring("0x0");
		if (output == -1)
			return (-1);
		return (3);
	}
	output = ft_printstring("0x");
	if (output == -1)
		return (-1);
	output = to_hex_low((unsigned long)ptr);
	if (output == -1)
		return (-1);
	return (printed + output);
}
