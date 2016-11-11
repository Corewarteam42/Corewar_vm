/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conf_obj.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:16:20 by abary             #+#    #+#             */
/*   Updated: 2016/11/11 13:16:20 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONF_OBJ_H
# define FT_CONF_OBJ_H

/*
** DECALAGE DE LA POSITION X DU TEXT PAR CARACTERE A AFFICHER
*/
# define TXTDECALLAGEX 10

/*
** POSITIONNEMENT DE LARENE SUR LECRAN
*/
# define VMSTARTX 16
# define VMSTARTY 22
# define VMSPACEBLANK 23
# define VMSPACELINE 18
# define VMPERLINE 64

/*
** WINNER TEXT
*/
# define WINNERTXTX 1700
# define WINNERTXTY 846
# define WINNERIMGX 1505
# define WINNERIMGY 865
# define WINNERCOLOR 0xFFFF0000

/*
** PLAYER NAME DISPLAY POSITION
*/
# define PLAYERNAMEX 1613
# define PLAYERNAMEY 707
# define PLAYERNAMEYINC 37
# define PLAYERNUMBERX 1541

/*
** BLOC IMAGE DE PROCESSUS-INSTRUCTION
*/
# define BLOCX 26
# define BLOCY 21

/*
** INTRO PRESSANYKEY POSITION
*/
# define PRESSANYX 875
# define PRESSANYY 731

/*
** POSITIONNEMENT DES PROCESSUS
*/
# define PROCDECALLAGEX -3
# define PROCDECALLAGEY 2
# define PROCX 24
# define PROCY 16

/*
** POSITIONNEMENT DES EFFETS
*/
# define EFFECT_CPERLOOP_X 182
# define EFFECT_CPERLOOP_Y 25
# define EFFECT_CPERLOOP_WIN_X 1715
# define EFFECT_CPERLOOP_WIN_Y 182
# define EFFECT_CPERLOOP_TODIE 3

/*
** BLOC CYCLE MANAGEMENT
** bar de chargement
*/
# define BARCTDSIZE 313
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
# define BTNCTDPLUS1X 1511
# define BTNCTDPLUS1Y 266
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
# define TEXTCYCLEX 1604
# define TEXTCYCLEY 183
# define TEXTCPERLOOPX 1805
# define TEXTCPERLOOPY TEXTCYCLEY
# define TEXTCTODIECOUNTX 1604
# define TEXTCTODIECOUNTY 235
# define TEXTCTODIEX 1788
# define TEXTCTODIEY TEXTCTODIECOUNTY
# define TXTCOLACTUAL 0x47b2fe
# define TXTCOLCPERLOOP TXTCOLACTUAL
# define TXTCOLCTODIECOUNT TXTCOLACTUAL
# define TXTCOLCTODIE TXTCOLACTUAL

/*
** BLOC PROCESSUS ALIVE INFORMATION
*/
# define TXTCOLPROCTOTAL TXTCOLACTUAL
# define TXTPROCTOTALX 1541
# define TXTPROCTOTALY 404
# define TXTPROCP1X 1621
# define TXTPROCP1Y TXTPROCTOTALY
# define TXTPROCP2X 1701
# define TXTPROCP2Y TXTPROCTOTALY
# define TXTPROCP3X 1781
# define TXTPROCP3Y TXTPROCTOTALY
# define TXTPROCP4X 1861
# define TXTPROCP4Y TXTPROCTOTALY

/*
** BAR PROC ALIVE TOTAL
*/
# define BARIMGID 13
# define BAROPENX 4
# define BAROPENY 26
# define BARCLOSEX 6
# define BARCLOSEY 26
# define BARPROCALIVESIZE 357
# define BARPROCALIVEX 1541
# define BARPROCALIVEY 373
# define BARALIVEPROCALPHA 70

/*
** BLOC PROCESSUS DEAD INFORMATION
*/
# define TXTPROCDEADINCY 62
# define BARPROCDEADINCY 62
# define BARDEADPROCALPHA 70

/*
** BLOC PROCESSUS LIVE INSTRUCTION INFORMATION
*/
# define TXTPROCLIVEINCY 124
# define BARPROCLIVEINCY 124
# define BARLIVEPROCALPHA 70

/*
** BLOC PROCESSUS LIVE INSTRUCTION INFORMATION
*/
# define TXTPROCLIVE2INCY 189
# define BARPROCLIVE2INCY 189
# define BARLIVE2PROCALPHA 70

/*
** BLOC PROCESSUS LIVE INSTRUCTION INFORMATION
*/
# define LASTLIVEDISPLAYSIZEX 81
# define LASTLIVEDISPLAYSIZEY 30
# define LASTLIVEDISLAYY 526
# define LASTLIVEDISPLAYP1X 1585
# define LASTLIVEDISPLAYP2X 1665
# define LASTLIVEDISPLAYP3X 1745
# define LASTLIVEDISPLAYP4X 1825

#endif
