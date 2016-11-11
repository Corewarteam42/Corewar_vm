/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_indirect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:10:43 by abary             #+#    #+#             */
/*   Updated: 2016/11/11 13:10:43 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_corewar.h"

int		ft_get_indirect(int pc, t_dvm *vm, t_proc *proc)
{
	t_argument arg;

	arg.value = 0;
	pc = ft_convert_pc(pc);
	if (proc->inst->id == 0x0D)
		ft_fill_args_ind(&arg, vm, (pc * 2) % SIZE_CHAR_ARENE);
	else
		ft_fill_args_dir(&arg, vm, (pc * 2) % SIZE_CHAR_ARENE);
	return (arg.value);
}
