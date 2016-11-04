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
static const char *ng0 = "//CS1/students/2018/jflinn18/CS373-1/SimpleALU/SimpALUTest.vhd";



static void work_a_4069600688_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 3152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5812);
    t4 = (t0 + 3536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5816);
    t4 = (t0 + 3600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(83, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5820);
    t10 = 1;
    if (4U == 4U)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5839);
    t10 = 1;
    if (4U == 4U)
        goto LAB18;

LAB19:    t10 = 0;

LAB20:    if (t10 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5857);
    t10 = 1;
    if (4U == 4U)
        goto LAB26;

LAB27:    t10 = 0;

LAB28:    if (t10 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 5876);
    t10 = 1;
    if (4U == 4U)
        goto LAB34;

LAB35:    t10 = 0;

LAB36:    if (t10 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 5896);
    t10 = 1;
    if (4U == 4U)
        goto LAB42;

LAB43:    t10 = 0;

LAB44:    if (t10 == 0)
        goto LAB40;

LAB41:    xsi_set_current_line(89, ng0);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5824);
    xsi_report(t7, 15U, 2);
    goto LAB9;

LAB10:    t11 = 0;

LAB13:    if (t11 < 4U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t11 = (t11 + 1);
    goto LAB13;

LAB16:    t7 = (t0 + 5843);
    xsi_report(t7, 14U, 2);
    goto LAB17;

LAB18:    t11 = 0;

LAB21:    if (t11 < 4U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB19;

LAB23:    t11 = (t11 + 1);
    goto LAB21;

LAB24:    t7 = (t0 + 5861);
    xsi_report(t7, 15U, 2);
    goto LAB25;

LAB26:    t11 = 0;

LAB29:    if (t11 < 4U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB27;

LAB31:    t11 = (t11 + 1);
    goto LAB29;

LAB32:    t7 = (t0 + 5880);
    xsi_report(t7, 16U, 2);
    goto LAB33;

LAB34:    t11 = 0;

LAB37:    if (t11 < 4U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t11 = (t11 + 1);
    goto LAB37;

LAB40:    t7 = (t0 + 5900);
    xsi_report(t7, 15U, 2);
    goto LAB41;

LAB42:    t11 = 0;

LAB45:    if (t11 < 4U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB43;

LAB47:    t11 = (t11 + 1);
    goto LAB45;

LAB48:    goto LAB2;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

}


extern void work_a_4069600688_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4069600688_2372691052_p_0};
	xsi_register_didat("work_a_4069600688_2372691052", "isim/SimpALUTest_isim_beh.exe.sim/work/a_4069600688_2372691052.didat");
	xsi_register_executes(pe);
}
