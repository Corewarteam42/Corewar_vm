/* FONCTION APPELLER PAR MINILIBX EN CAS D'APPUIS SOURIS/CLAVIER
 * - Le nom de la fonction est ainsi découpé: <touche><action>_hook
 * 		- touche = mouse ou key (clavier)
 * 		- action = [r]elease, [p]ress, [o]ver
 */
#include "ft_corewar.h"

int		mouseo_hook(int x, int y, t_data *d)
{
	/* ENREGISTRE LA POSITION DE LA SOURIS QUAND ELLE SE DEPLACE */
	d->mlx.input.mo_x = x;
	d->mlx.input.mo_y = y;
	return (0);
}

int		keyr_hook(int key, t_data *d)
{
	if (key == 53)
		exit1(0, d, "by pressing echap");
	return (0);
}

int		keyp_hook(int key, t_data *d)
{
	return (d->mlx.loop += 0 * key);
}

int		mousep_hook(int btn, int x, int y, t_data *d)
{
	(btn == 1) ? d->mlx.input->mleft = 1 : 0;
	(btn == 2) ? d->mlx.input->mright = 1 : 0;
	return (btn += 0 * d->mlx.loop * x * y);
}

int		mouser_hook(int btn, int x, int y, t_data *d)
{
	(btn == 1) ? d->mlx.input->mleft = 0 : 0;
	(btn == 2) ? d->mlx.input->mright = 0 : 0;
	/* ENREGISTRE LA POSITION DE LA SOURIS QUAND ON CLIC */
	d->mlx.input.mr_x = x;
	d->mlx.input.mr_y = y;
	return (btn += 0);
}
