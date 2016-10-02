#include "ft_corewar.h"

static int		ft_fill_args_reg(t_argument *arg, t_dvm *vm, int pc)
{
	ft_putendl("WTF");
	arg->value = ft_getchar(vm->arene + pc);
	pc = (pc + 2) % SIZE_CHAR_ARENE;
	return (pc);
}

static int		ft_fill_args_dir(t_argument *arg, t_dvm *vm, int pc)
{
	int i;
	int decal;

	i = 0;
	decal = 24;
	ft_putendl("mouhahahahhahahahhahahahahhahahahahahaahahha");
	while (i < 4)
	{
		arg->value |= ft_getchar(vm->arene + pc) << decal;
		pc = (pc + 2) % SIZE_CHAR_ARENE;
		decal -= 8;
		++i;
	}
	return (pc);
}

static int		ft_fill_args_ind(t_argument *arg, t_dvm *vm, int pc)
{
	int i;
	int decal;
	unsigned int t;

	i = 0;
	decal = 8;
	t = 0;
	ft_putendl("mouhahahahhahahahhahahahahhahahahahahaahahha");
	while (i < 2)
	{
		arg->value |= (unsigned char)ft_getchar(vm->arene + pc) << decal;
		pc = (pc + 2) % SIZE_CHAR_ARENE;
		decal -= 8;
		++i;
	}
	arg->value = (short)arg->value;
	return (pc);
}


int		ft_fill_args(t_argument *arg,t_dvm *vm, int pc, int flag_size_ind)
{
	int i;

	i = 0;
	while (i < MAX_ARGS_NUMBER)
	{
		arg[i].value = 0;
		if (arg[i].type == REG_CODE)
			pc = ft_fill_args_reg(&arg[i], vm, pc);
		else if (arg[i].type == DIR_CODE && !flag_size_ind)
			pc = ft_fill_args_dir(&arg[i], vm, pc);
		else if (arg[i].type == IND_CODE || arg[i].type == DIR_CODE)
			pc = ft_fill_args_ind(&arg[i], vm, pc);
		if (arg[i].type == IND_CODE)
			ft_putendl("FDP");
		ft_putnbr(arg[i].type);
		ft_putchar('\n');
		++i;
	}
	return (pc);
}
