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
static const char *ng0 = "//CS1/students/2018/jflinn18/CS373-1/SimpleNandGate/NandGateTestBench.vhd";



static void work_a_1860961135_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;

LAB0:    t1 = (t0 + 2512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t7);

LAB12:    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 4911);
    xsi_report(t2, 10U, 2);
    goto LAB9;

LAB10:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t7);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

LAB14:    t2 = (t0 + 4921);
    xsi_report(t2, 10U, 2);
    goto LAB15;

LAB16:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t7);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t2 = (t0 + 4931);
    xsi_report(t2, 10U, 2);
    goto LAB21;

LAB22:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(84, ng0);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    t2 = (t0 + 4941);
    xsi_report(t2, 10U, 2);
    goto LAB27;

LAB28:    goto LAB2;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

}


extern void work_a_1860961135_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1860961135_2372691052_p_0};
	xsi_register_didat("work_a_1860961135_2372691052", "isim/NandGateTestBench_isim_beh.exe.sim/work/a_1860961135_2372691052.didat");
	xsi_register_executes(pe);
}
