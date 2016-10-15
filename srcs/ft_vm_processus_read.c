/*
** LECTURES DES PROCESSUS
*/
#include "ft_corewar.h"

void	ft_affadv(t_dvm *vm, t_proc *proc, int pc)
{
	int		i;
	int		j;

	i = 0; 
	j = ((proc->pc - pc));
	j = ft_convert_pc(j);
	pc = ft_convert_pc(pc);
	if (pc)
		ft_printf("ADV %d (%#06x -> %#06x) ",  j, pc % MEM_SIZE, (pc + j) % MEM_SIZE);
	else
		ft_printf("ADV %d (0x0000 -> %#06x) ", j, pc + j);
	j *= 2;
	pc *= 2;
	while (i < j)
	{
		ft_putchar(ft_tolower(*(vm->arene + ((pc + i++) % SIZE_CHAR_ARENE))));
		ft_putchar(ft_tolower(*(vm->arene + ((pc + i++) % SIZE_CHAR_ARENE))));
		ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	processus_read(t_dvm *v, t_proc *begin)
{
	int pc;
	t_proc *proc = begin;
	v->graphic += 0;

	pc = 0;
	if (v->options.cycles)
		ft_printf("It is now cycle %d\n", v->cycle);
	while ( proc )
	{
		if (proc->wait <= 0)
		{
				proc->pc_turfu = proc->pc * 2;
				if (!(ft_get_instruction(v->instructions, v, proc)))
				{
					proc->pc = (proc->pc + 1) % MEM_SIZE ;
					proc = proc->n;
					continue ;
				}
		}
		else if (proc->wait == 1)
		{
			/*
		if (v->cycle == 10602)
			ft_printf("proc id : %d, instruction %s\n", proc->id + 1, proc->inst->name);
			*/
			pc = proc->pc;
			proc->inst->f_instructions(v, *proc->inst, proc);
			//if (v->cycle == 26469	&& v->options.movements && proc->inst->id != 9)
			if (v->options.movements && (proc->inst->id != 9 || proc->carry == 0))
				ft_affadv(v, proc, pc);
			proc->wait = 0;
	//		proc->inst = 0;
		}
		proc->wait--;
		proc = proc->n;
	}
}
