/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Proyectos/Universidad/AER/COFNET/NAS_2017/NAS_asic/Monitor/Sources/ramfifo.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_3347362142_0000452272_p_0(char *t0)
{
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7008);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t5 = t1;
    memset(t5, (unsigned char)2, 6U);
    t6 = (t0 + 7200);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 7264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(63, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 7328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB31;

LAB32:    t3 = (unsigned char)0;

LAB33:    if (t3 != 0)
        goto LAB29;

LAB30:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2472U);
    t8 = *((char **)t2);
    t2 = (t0 + 11864U);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t8, t2, 1);
    t10 = (t18 + 12U);
    t19 = *((unsigned int *)t10);
    t20 = (1U * t19);
    t21 = (6U != t20);
    if (t21 == 1)
        goto LAB16;

LAB17:    t22 = (t0 + 7200);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t9, 6U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 11880U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t2, t1, 1);
    t6 = (t18 + 12U);
    t19 = *((unsigned int *)t6);
    t20 = (1U * t19);
    t3 = (6U != t20);
    if (t3 == 1)
        goto LAB18;

LAB19:    t7 = (t0 + 7264);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t22 = *((char **)t10);
    memcpy(t22, t5, 6U);
    xsi_driver_first_trans_fast(t7);
    goto LAB11;

LAB13:    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;
    goto LAB15;

LAB16:    xsi_size_not_matching(6U, t20, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(6U, t20, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2472U);
    t6 = *((char **)t1);
    t1 = (t0 + 11864U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t6, t1, 1);
    t8 = (t18 + 12U);
    t19 = *((unsigned int *)t8);
    t20 = (1U * t19);
    t14 = (6U != t20);
    if (t14 == 1)
        goto LAB25;

LAB26:    t9 = (t0 + 7200);
    t10 = (t9 + 56U);
    t22 = *((char **)t10);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t7, 6U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 11896U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t2, t1, 1);
    t6 = (t18 + 12U);
    t19 = *((unsigned int *)t6);
    t20 = (1U * t19);
    t3 = (6U != t20);
    if (t3 == 1)
        goto LAB27;

LAB28:    t7 = (t0 + 7328);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t22 = *((char **)t10);
    memcpy(t22, t5, 6U);
    xsi_driver_first_trans_fast(t7);
    goto LAB11;

LAB22:    t1 = (t0 + 2952U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t3 = t13;
    goto LAB24;

LAB25:    xsi_size_not_matching(6U, t20, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(6U, t20, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t1 = (t0 + 11880U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t6, t1, 1);
    t8 = (t18 + 12U);
    t19 = *((unsigned int *)t8);
    t20 = (1U * t19);
    t14 = (6U != t20);
    if (t14 == 1)
        goto LAB34;

LAB35:    t9 = (t0 + 7264);
    t10 = (t9 + 56U);
    t22 = *((char **)t10);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t7, 6U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 11896U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t18, t2, t1, 1);
    t6 = (t18 + 12U);
    t19 = *((unsigned int *)t6);
    t20 = (1U * t19);
    t3 = (6U != t20);
    if (t3 == 1)
        goto LAB36;

LAB37:    t7 = (t0 + 7328);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t22 = *((char **)t10);
    memcpy(t22, t5, 6U);
    xsi_driver_first_trans_fast(t7);
    goto LAB11;

LAB31:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t3 = t13;
    goto LAB33;

LAB34:    xsi_size_not_matching(6U, t20, 0);
    goto LAB35;

LAB36:    xsi_size_not_matching(6U, t20, 0);
    goto LAB37;

}

static void work_a_3347362142_0000452272_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 11896U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 0);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 7392);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 7024);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 7392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3347362142_0000452272_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 11896U);
    t3 = (64 - 1);
    t4 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, t3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 7456);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 7040);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 7456);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3347362142_0000452272_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(81, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7520);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7056);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3347362142_0000452272_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(82, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7072);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3347362142_0000452272_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 7648);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 7088);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3347362142_0000452272_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(2U);
    memset(t10, 0, 2U);
    t11 = t10;
    memset(t11, (unsigned char)4, 2U);
    t12 = (t0 + 7712);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 2U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 7104);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t1 = (t0 + 7712);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 2U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3347362142_0000452272_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 7776);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7120);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3347362142_0000452272_init()
{
	static char *pe[] = {(void *)work_a_3347362142_0000452272_p_0,(void *)work_a_3347362142_0000452272_p_1,(void *)work_a_3347362142_0000452272_p_2,(void *)work_a_3347362142_0000452272_p_3,(void *)work_a_3347362142_0000452272_p_4,(void *)work_a_3347362142_0000452272_p_5,(void *)work_a_3347362142_0000452272_p_6,(void *)work_a_3347362142_0000452272_p_7};
	xsi_register_didat("work_a_3347362142_0000452272", "isim/NASIC_monitor_tb_isim_beh.exe.sim/work/a_3347362142_0000452272.didat");
	xsi_register_executes(pe);
}
