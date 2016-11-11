/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_sub.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:10:48 by abary             #+#    #+#             */
/*   Updated: 2016/11/11 13:10:48 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_corewar.h"

static void	ft_log_sub(t_dvm *vm, t_proc *proc, int *registre)
{
	if (vm->options.operations)
	{
		if (proc->id < 10000)
			ft_printf("P%5d | sub r%d r%d r%d\n", proc->id,
					registre[1], registre[2], registre[0]);
		else if (proc->id < 100000)
			ft_printf("P%6d | sub r%d r%d r%d\n", proc->id,
					registre[1], registre[2], registre[0]);
		else
			ft_printf("P%7d | sub r%d r%d r%d\n", proc->id,
					registre[1], registre[2], registre[0]);
	}
}

void		ft_instructions_sub(t_dvm *vm, t_instructions inst, t_proc *proc)
{
	int	registre[3];

	if (ft_check_value_args(proc->args, &inst, vm, proc))
	{
		registre[0] = proc->args[2].value;
		registre[1] = proc->args[0].value;
		registre[2] = proc->args[1].value;
		if (ft_get_args(proc))
		{
			log_inst(proc->player, proc->id, "SUB");
			ft_log_sub(vm, proc, registre);
			if (!(*(proc->ireg + --(registre[0])) =
						proc->args[0].value - proc->args[1].value))
				proc->carry = 1;
			else
				proc->carry = 0;
		}
	}
	if ((proc->pc = (proc->pc_turfu / 2)) >= MEM_SIZE)
		proc->pc %= MEM_SIZE;
}
