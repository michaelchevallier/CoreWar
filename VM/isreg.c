/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isreg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:51:02 by mchevall          #+#    #+#             */
/*   Updated: 2016/11/14 10:51:11 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

static int	arg_nb1(unsigned char *board, t_proc *c_proc)
{
	int		result;
	int		reg_nb;

	result = 0;
	reg_nb = 0;
	reg_nb = bit_cat(board, c_proc, 2, 1);
	if (reg_nb > 16 || reg_nb < 1)
	{
		c_proc->error = 1;
		return (-1);
	}
	result = c_proc->r[reg_nb - 1];
	return (result);
}

int			isreg(unsigned char *board, t_proc *c_proc, int *type, int arg_nb)
{
	int		result;
	int		reg_nb;

	result = 0;
	reg_nb = 0;
	if (arg_nb == 2)
	{
		if (type[0] == REG)
			reg_nb = bit_cat(board, c_proc, 3, 1);
		else
			reg_nb = bit_cat(board, c_proc, 4, 1);
		if (reg_nb > 16 || reg_nb < 1)
		{
			c_proc->error = 1;
			return (-1);
		}
		result = c_proc->r[reg_nb - 1];
	}
	else
		result = arg_nb1(board, c_proc);
	return (result);
}
