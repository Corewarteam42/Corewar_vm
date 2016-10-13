/*
** GESTION DE LA VM
*/
#include "ft_corewar.h"

void	vm_dump(t_dvm *v)
{
	l2(12, "BYE BYE", "dump cycle", v->cycle);
	ft_display_vm(v);
	ft_printf(" nbr cycles : : %d\n", v->cycle);
	ft_printf("Nombre de proc : %d\n", v->nbr_proc);
	ft_printf("Cycle to die : %d\n", v->ctodie);
	ft_printf("Last live cycle : %d\n", v->last_live_cycle);
	ft_printf("Live current period : %d\n", v->nbr_live);
	ft_printf("Live current period player : %d\n", v->live_player);
	ft_printf("max cheks : %d\n", v->max_checks);
	exit (0);
	exit1(0, data(), "dump order");
}

void	vm(t_dvm *v, int cperloop)
{


	// if (v->cycle > 21500)
	// 	v->cperloop = 10;


	while (--cperloop > -1)
	{
		if (v->graphic && v->pause && data()->mlx.input.up == 0
		&& !(v->pause_inc))
			break ;
		v->pause_inc = 0;
		v->cycle++;
		if (!gameloop(v) || !v->proc)
		{
			// Ici la partie est terminé
			l2(1, "LAST_LIVE", "(v->last_live) is the winner", v->last_live);
			if (v->dump != -1)
				vm_dump(v);
			exit1(0, data(), "game over");
		}
		else if (v->dump == v->cycle)
		{
			l2(1, "DUMP_ORDER", "(cycle) call vm_dump()", v->cycle);
			if (v->graphic)
				display(&(data()->mlx), v);
			vm_dump(v);
		}
	}
	// lance l'affichage si necessaire
	if (!(data()->mlx.loop) && v->graphic)
		display(&(data()->mlx), v);
	if (v->dump <= v->cycle && v->dump != -1)
			vm_dump(v);
}
