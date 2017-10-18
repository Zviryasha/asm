/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 15:18:19 by opanchen          #+#    #+#             */
/*   Updated: 2017/10/18 18:52:20 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lkorvar.h"

void	errors(int i)
{
	if (i == -25)
		ft_putstr("Error in ld\n");
	if (i == -24)
		ft_putstr("Error in lld\n");
	if (i == -23)
		ft_putstr("Error in lldi\n");
	if (i == -22)
		ft_putstr("Error in ldi\n");
	if (i == -21)
		ft_putstr("Error in live\n");
	if (i == -20)
		ft_putstr("Can't open file\n");
	if (i == -2)
		ft_putstr("Error in .name or .coment\n");
	if (i == -3)
		ft_putstr("Error in lable\n");
	if (i == -10)
		ft_putstr("Error in coments\n");
	if (i == -1)
		ft_putstr("Error\n");
}
