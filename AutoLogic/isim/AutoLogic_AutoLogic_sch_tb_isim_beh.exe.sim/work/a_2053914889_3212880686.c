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
static const char *ng0 = "//CS1/students/2018/jflinn18/CS373-1/AutoLogic/AutoTest.vhd";



static void work_a_2053914889_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int64 t11;
    int t12;

LAB0:    t1 = (t0 + 2672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5148);
    *((int *)t2) = 0;
    t3 = (t0 + 5152);
    *((int *)t3) = 10;
    t4 = 0;
    t5 = 10;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(62, ng0);

LAB35:    *((char **)t1) = &&LAB36;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    t6 = (t0 + 3056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(50, ng0);
    t11 = (100 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 5148);
    t4 = *((int *)t2);
    t3 = (t0 + 5152);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB32:    t12 = (t4 + 1);
    t4 = t12;
    t6 = (t0 + 5148);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(52, ng0);
    t11 = (100 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(54, ng0);
    t11 = (100 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t11);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3056);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(56, ng0);
    t11 = (50 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t11);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t11 = (50 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t11);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng0);
    t11 = (50 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t11);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    goto LAB6;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB33:    goto LAB2;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

}


extern void work_a_2053914889_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2053914889_3212880686_p_0};
	xsi_register_didat("work_a_2053914889_3212880686", "isim/AutoLogic_AutoLogic_sch_tb_isim_beh.exe.sim/work/a_2053914889_3212880686.didat");
	xsi_register_executes(pe);
}
