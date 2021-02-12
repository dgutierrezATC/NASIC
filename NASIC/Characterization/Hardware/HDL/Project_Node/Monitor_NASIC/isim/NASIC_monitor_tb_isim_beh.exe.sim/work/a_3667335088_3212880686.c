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
static const char *ng0 = "D:/Proyectos/Universidad/AER/COFNET/NAS_2017/NAS_asic/Monitor/Sources/AER_DISTRIBUTED_MONITOR.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3667335088_3212880686_p_0(char *t0)
{
    char t16[16];
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
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;

LAB0:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1192U);
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
LAB3:    t1 = (t0 + 6352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 12795);
    t6 = (t0 + 6432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 6496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 6560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 6688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 6752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(130, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 6816);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4072U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 12700U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t16, t2, t1, 1);
    t6 = (t16 + 12U);
    t19 = *((unsigned int *)t6);
    t28 = (1U * t19);
    t3 = (2U != t28);
    if (t3 == 1)
        goto LAB42;

LAB43:    t7 = (t0 + 6432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t5, 2U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4392U);
    t7 = *((char **)t2);
    t2 = (t0 + 12700U);
    t8 = (t0 + 12797);
    t10 = (t16 + 0U);
    t17 = (t10 + 0U);
    *((int *)t17) = 0;
    t17 = (t10 + 4U);
    *((int *)t17) = 1;
    t17 = (t10 + 8U);
    *((int *)t17) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t10 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t2, t8, t16);
    if (t20 == 1)
        goto LAB16;

LAB17:    t15 = (unsigned char)0;

LAB18:    if (t15 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 12700U);
    t5 = (t0 + 12799);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t19;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t4 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 12700U);
    t5 = (t0 + 12801);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t19;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t4 == 1)
        goto LAB30;

LAB31:    t3 = (unsigned char)0;

LAB32:    if (t3 != 0)
        goto LAB28;

LAB29:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 12700U);
    t5 = (t0 + 12803);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t19;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t4 == 1)
        goto LAB37;

LAB38:    t3 = (unsigned char)0;

LAB39:    if (t3 != 0)
        goto LAB35;

LAB36:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 6560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(167, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 6688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 6752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(170, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 6816);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 6496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(134, ng0);
    t17 = (t0 + 6560);
    t24 = (t17 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 6688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 6752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 3272U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 12700U);
    t8 = (t0 + 12620U);
    t1 = xsi_base_array_concat(t1, t16, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t19 = (2U + 2U);
    t3 = (4U != t19);
    if (t3 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 6816);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t21 = (t17 + 56U);
    t24 = *((char **)t21);
    memcpy(t24, t1, 4U);
    xsi_driver_first_trans_delta(t9, 12U, 4U, 0LL);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 6496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    t17 = (t0 + 2632U);
    t21 = *((char **)t17);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)2);
    t15 = t23;
    goto LAB18;

LAB19:    xsi_size_not_matching(4U, t19, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(142, ng0);
    t8 = (t0 + 6560);
    t10 = (t8 + 56U);
    t17 = *((char **)t10);
    t21 = (t17 + 56U);
    t24 = *((char **)t21);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 6688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 6752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 12700U);
    t8 = (t0 + 12636U);
    t1 = xsi_base_array_concat(t1, t16, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t19 = (2U + 2U);
    t3 = (4U != t19);
    if (t3 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 6816);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t21 = (t17 + 56U);
    t24 = *((char **)t21);
    memcpy(t24, t1, 4U);
    xsi_driver_first_trans_delta(t9, 12U, 4U, 0LL);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 6496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB23:    t8 = (t0 + 2792U);
    t9 = *((char **)t8);
    t11 = *((unsigned char *)t9);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB25;

LAB26:    xsi_size_not_matching(4U, t19, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(150, ng0);
    t8 = (t0 + 6560);
    t10 = (t8 + 56U);
    t17 = *((char **)t10);
    t21 = (t17 + 56U);
    t24 = *((char **)t21);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 6688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 6752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 12700U);
    t8 = (t0 + 12652U);
    t1 = xsi_base_array_concat(t1, t16, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t19 = (2U + 2U);
    t3 = (4U != t19);
    if (t3 == 1)
        goto LAB33;

LAB34:    t9 = (t0 + 6816);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t21 = (t17 + 56U);
    t24 = *((char **)t21);
    memcpy(t24, t1, 4U);
    xsi_driver_first_trans_delta(t9, 12U, 4U, 0LL);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 6496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB30:    t8 = (t0 + 2952U);
    t9 = *((char **)t8);
    t11 = *((unsigned char *)t9);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB32;

LAB33:    xsi_size_not_matching(4U, t19, 0);
    goto LAB34;

LAB35:    xsi_set_current_line(158, ng0);
    t8 = (t0 + 6560);
    t10 = (t8 + 56U);
    t17 = *((char **)t10);
    t21 = (t17 + 56U);
    t24 = *((char **)t21);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 6688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 6752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 3752U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 12700U);
    t8 = (t0 + 12668U);
    t1 = xsi_base_array_concat(t1, t16, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t19 = (2U + 2U);
    t3 = (4U != t19);
    if (t3 == 1)
        goto LAB40;

LAB41:    t9 = (t0 + 6816);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t21 = (t17 + 56U);
    t24 = *((char **)t21);
    memcpy(t24, t1, 4U);
    xsi_driver_first_trans_delta(t9, 12U, 4U, 0LL);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 6496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB37:    t8 = (t0 + 3112U);
    t9 = *((char **)t8);
    t11 = *((unsigned char *)t9);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB39;

LAB40:    xsi_size_not_matching(4U, t19, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(2U, t28, 0);
    goto LAB43;

}


extern void work_a_3667335088_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3667335088_3212880686_p_0};
	xsi_register_didat("work_a_3667335088_3212880686", "isim/NASIC_monitor_tb_isim_beh.exe.sim/work/a_3667335088_3212880686.didat");
	xsi_register_executes(pe);
}
