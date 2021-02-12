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
static const char *ng0 = "D:/Proyectos/Universidad/AER/COFNET/NAS_2017/NAS_asic/Monitor/Sources/AER_DISTRIBUTED_MONITOR_MODULE.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2540054416_3212880686_p_0(char *t0)
{
    char t70[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    int t12;
    int t13;
    int t14;
    int t15;
    unsigned char t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned char t57;
    unsigned char t58;
    char *t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 4632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 3328U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(47, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 4712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t5 = (t0 + 4776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 4840);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t5 = (t0 + 4904);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(51, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 4712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t12 = (4 / 2);
    t13 = (t12 - 1);
    t2 = (t0 + 8808);
    *((int *)t2) = 0;
    t6 = (t0 + 8812);
    *((int *)t6) = t13;
    t14 = 0;
    t15 = t13;

LAB11:    if (t14 <= t15)
        goto LAB12;

LAB14:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 8724U);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t13 = (t12 - 3);
    t20 = (t13 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t12);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t6 = (t2 + t22);
    t3 = *((unsigned char *)t6);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4840);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t5 = (t0 + 4904);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB23:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8724U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t70, t2, t1, 1);
    t6 = (t70 + 12U);
    t20 = *((unsigned int *)t6);
    t21 = (1U * t20);
    t3 = (1U != t21);
    if (t3 == 1)
        goto LAB27;

LAB28:    t7 = (t0 + 4776);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t25 = (t9 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 1U);
    xsi_driver_first_trans_fast(t7);
    goto LAB6;

LAB8:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB10;

LAB12:    xsi_set_current_line(55, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 8808);
    t17 = *((int *)t7);
    t18 = (2 * t17);
    t19 = (t18 - 3);
    t20 = (t19 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t18);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t9 = (t8 + t22);
    t23 = *((unsigned char *)t9);
    t24 = (t23 == (unsigned char)3);
    if (t24 == 1)
        goto LAB18;

LAB19:    t25 = (t0 + 1352U);
    t26 = *((char **)t25);
    t25 = (t0 + 8808);
    t27 = *((int *)t25);
    t28 = (2 * t27);
    t29 = (t28 + 1);
    t30 = (t29 - 3);
    t31 = (t30 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t29);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t34 = (t26 + t33);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)3);
    t16 = t36;

LAB20:    if (t16 != 0)
        goto LAB15;

LAB17:
LAB16:
LAB13:    t1 = (t0 + 8808);
    t14 = *((int *)t1);
    t2 = (t0 + 8812);
    t15 = *((int *)t2);
    if (t14 == t15)
        goto LAB14;

LAB21:    t12 = (t14 + 1);
    t14 = t12;
    t5 = (t0 + 8808);
    *((int *)t5) = t14;
    goto LAB11;

LAB15:    xsi_set_current_line(56, ng0);
    t37 = (t0 + 1352U);
    t38 = *((char **)t37);
    t37 = (t0 + 8808);
    t39 = *((int *)t37);
    t40 = (2 * t39);
    t41 = (t40 - 3);
    t42 = (t41 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t40);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t45 = (t38 + t44);
    t46 = *((unsigned char *)t45);
    t47 = (t0 + 1352U);
    t48 = *((char **)t47);
    t47 = (t0 + 8808);
    t49 = *((int *)t47);
    t50 = (2 * t49);
    t51 = (t50 + 1);
    t52 = (t51 - 3);
    t53 = (t52 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t51);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t56 = (t48 + t55);
    t57 = *((unsigned char *)t56);
    t58 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t46, t57);
    t59 = (t0 + 8808);
    t60 = *((int *)t59);
    t61 = (t60 - 3);
    t62 = (t61 * -1);
    t63 = (1 * t62);
    t64 = (0U + t63);
    t65 = (t0 + 4712);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    *((unsigned char *)t69) = t58;
    xsi_driver_first_trans_delta(t65, t64, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 8808);
    t12 = *((int *)t1);
    t13 = (2 * t12);
    t17 = (t13 + 1);
    t18 = (t17 - 3);
    t20 = (t18 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t17);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t5 = (t2 + t22);
    t3 = *((unsigned char *)t5);
    t19 = (4 / 2);
    t6 = (t0 + 8808);
    t27 = *((int *)t6);
    t28 = (t19 + t27);
    t29 = (t28 - 3);
    t31 = (t29 * -1);
    t32 = (1 * t31);
    t33 = (0U + t32);
    t7 = (t0 + 4712);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t25 = (t9 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t3;
    xsi_driver_first_trans_delta(t7, t33, 1, 0LL);
    goto LAB16;

LAB18:    t16 = (unsigned char)1;
    goto LAB20;

LAB22:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t7 = (t0 + 8724U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t8, t7);
    t15 = (t14 - 3);
    t31 = (t15 * -1);
    t32 = (1 * t31);
    t33 = (0U + t32);
    t9 = (t0 + 4712);
    t25 = (t9 + 56U);
    t26 = *((char **)t25);
    t34 = (t26 + 56U);
    t37 = *((char **)t34);
    *((unsigned char *)t37) = (unsigned char)2;
    xsi_driver_first_trans_delta(t9, t33, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t12 = (4 / 2);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8724U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t14 = (t12 + t13);
    t15 = (t14 - 3);
    t20 = (t15 * -1);
    t21 = (1 * t20);
    t22 = (0U + t21);
    t5 = (t0 + 4712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t5, t22, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t12 = (4 / 2);
    t1 = (t0 + 2312U);
    t6 = *((char **)t1);
    t1 = (t0 + 8724U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t1);
    t14 = (t12 + t13);
    t15 = (t14 - 3);
    t20 = (t15 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t14);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t7 = (t5 + t22);
    t3 = *((unsigned char *)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t25 = (t0 + 8724U);
    t8 = xsi_base_array_concat(t8, t70, t9, (char)97, t2, t25, (char)99, t3, (char)101);
    t31 = (1U + 1U);
    t4 = (2U != t31);
    if (t4 == 1)
        goto LAB25;

LAB26:    t26 = (t0 + 4904);
    t34 = (t26 + 56U);
    t37 = *((char **)t34);
    t38 = (t37 + 56U);
    t45 = *((char **)t38);
    memcpy(t45, t8, 2U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 4840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_size_not_matching(2U, t31, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(1U, t21, 0);
    goto LAB28;

}


extern void work_a_2540054416_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2540054416_3212880686_p_0};
	xsi_register_didat("work_a_2540054416_3212880686", "isim/NASIC_monitor_tb_isim_beh.exe.sim/work/a_2540054416_3212880686.didat");
	xsi_register_executes(pe);
}
