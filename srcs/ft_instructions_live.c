#include "ft_corewar.h"
void	ft_instructions_live(t_dvm *vm, t_instructions inst, t_proc *proc)
{
	(void)vm;
	(void)inst;
	(void)proc;

	if (vm->ctodie > 0)
	{
		vm->nbr_live++;
		proc->live += 1;
	}
	proc->last_live = vm->cycle;
	if (ft_check_value_args(proc->args, &inst, vm, proc))
	{
		if (vm->options.operations)
			ft_printf("P%5d | live %d\n", proc->id + 1, proc->args[0].value);
		if (proc->args[0].value <= -1 && proc->args[0].value >= -vm->nbr_players)
		{

			if (vm->options.lives)
			{
				ft_printf("Player %d (%s) is said to be alive\n",
						ABS(proc->args[0].value),
						vm->p[(ABS(proc->args[0].value)) -1].header.prog_name);
			}
			if (vm->ctodie > 0)
			{
				vm->p[(ABS(proc->args[0].value)) - 1].last_cycle_live = vm->cycle;
				vm->p[(ABS(proc->args[0].value)) - 1].total_live++;
				proc->live_player++;
				vm->last_live = proc->args[0].value;
				vm->last_live_cycle = vm->cycle;
				vm->live_player++;
			}
			ft_put_color_size(vm->color, ARENE_CODE_COLOR_P3,
					proc->pc + 1 , 4);
		}
	}
	proc->pc = (proc->pc_turfu / 2) % MEM_SIZE;
}
