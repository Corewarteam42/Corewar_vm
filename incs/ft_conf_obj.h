#ifndef FT_CONF_OBJ_H
# define FT_CONF_OBJ_H
/*
** CONFIG DE LA POSITION DES OBJET ET CLIC OBJET
*/

/*
** POSITIONNEMENT DE LARENE SUR LECRAN
*/
# define VMSTARTX 16
# define VMSTARTY 22
# define VMSPACEBLANK 23
# define VMSPACELINE 18
# define VMPERLINE 64

/*
** BLOC CYCLE MANAGEMENT
** bar de chargement
*/
# define BARCTDSIZE 310
# define BARCTDLEFTX 1551
# define BARCTDLEFTY 266
/*
** BLOC CYCLE MANAGEMENT
** bouton + et -
*/
# define BTNCTDPLUSX1 1514
# define BTNCTDPLUSX2 1542
# define BTNCTDPLUSY1 267
# define BTNCTDPLUSY2 289
# define BTNCTDPLUS1X 1504
# define BTNCTDPLUS1Y 259
# define BTNCTDLESSINCREMENT 360
# define BTNCTDLESSX1 BTNCTDPLUSX1 + BTNCTDLESSINCREMENT
# define BTNCTDLESSX2 BTNCTDPLUSX2 + BTNCTDLESSINCREMENT
# define BTNCTDLESSY1 BTNCTDPLUSY1
# define BTNCTDLESSY2 BTNCTDPLUSY2
# define BTNCTDLESS1X BTNCTDPLUS1X + BTNCTDLESSINCREMENT
# define BTNCTDLESS1Y BTNCTDPLUS1Y
/*
** BLOC CYCLE MANAGEMENT
** text cycle
*/


#endif
