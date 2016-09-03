#ifndef FT_COREWAR_H
# define FT_COREWAR_H
/*
 *	Header lié à corewar
 */

/* LIB STANDAR */
# include <fcntl.h>
# include <dirent.h>
# include <limits.h>
# include "mlx.h"
# include "libft.h"
/* LIB COREWAR/MLX */
# include "op.h"
# include "ft_conf.h"
# include "ft_terminal_log.h"
# include "ft_struct_mlx.h"
# include "ft_struct_vm.h"
# include "ft_struct_data.h"
# include "ft_mlx.h"

/* FICHIER FT_EXIT.C */
int		exit1(int err, t_data *d, char *msg);
int		exit2(int err, t_data *d, char *del, char *msg);

/* FICHIER FT_FREE.C */
void	free_data(t_data *d);

/* FICHIER FT_COREWAR.C */
t_data	*data(void);

/* FICHIER FT_VM_INIT.C */
void	vm_init(t_data *d, t_dvm *v, int i);

/* FICHIER FT_VM.C */
void	vm(t_dvm *v, int cperloop);

/* FICHIER FT_VM_PROCESSUS.C */
void	proc_new(t_dvm *v, t_proc *new, int player, int i);
int		proc_kill(t_dvm *v, t_proc *target, t_proc *procdie);

/* FICHIER FT_GAMELOOP.C */
void	gameloop(t_dvm *v);

#endif
