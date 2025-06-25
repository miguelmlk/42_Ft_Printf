/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimalek <mimalek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:21:06 by mimalek           #+#    #+#             */
/*   Updated: 2025/06/25 18:36:18 by mimalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_digit_hex_upp(unsigned int n)
{
	int	output;

	output = to_hex_upp(n);
	if (output == -1)
		return (-1);
	else
		return (output);
}

int	ft_print_digit_hex_low(unsigned int n)
{
	int	output;

	output = to_hex_low(n);
	if (output == -1)
		return (-1);
	else
		return (output);
}
