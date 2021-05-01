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
static const char *ng0 = "F:/Documents/Image Proccessing Verilog/ImageProcessing/test.v";
static unsigned int ng1[] = {0U, 0U};
static const char *ng2 = "F:\\Documents\\Image Proccessing Verilog\\thresholding.coe";
static const char *ng3 = "wb";
static const char *ng4 = "memory_initialization_radix = 2;\n";
static const char *ng5 = "memory_initialization_vector =\n";
static unsigned int ng6[] = {41749U, 0U};
static const char *ng7 = "%b;";
static const char *ng8 = "%b,\n";
static int ng9[] = {1, 0};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {60U, 0U};
static unsigned int ng12[] = {80U, 0U};
static unsigned int ng13[] = {1U, 0U};



static int sp_writeCOE(char *t1, char *t2)
{
    char t7[8];
    char t25[8];
    char t53[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1120);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4712);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 16);
    xsi_set_current_line(52, ng0);
    *((int *)t7) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t4 = (t7 + 4);
    *((int *)t4) = 0;
    t5 = (t1 + 5032);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 32);
    xsi_set_current_line(53, ng0);

LAB6:    xsi_set_current_line(54, ng0);
    t4 = (t1 + 5032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 1120);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng4, 1, t8);
    xsi_set_current_line(55, ng0);
    t4 = (t1 + 5032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 1120);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng5, 1, t8);
    xsi_set_current_line(57, ng0);

LAB7:    t4 = (t1 + 4712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB9;

LAB8:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB9;

LAB12:    if (*((unsigned int *)t6) > *((unsigned int *)t8))
        goto LAB11;

LAB10:    *((unsigned int *)t7) = 1;

LAB11:    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t7);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(63, ng0);
    t4 = (t1 + 5032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t6));

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t11 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB13:    xsi_set_current_line(57, ng0);
    t18 = (t2 + 88U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    xsi_wp_set_status(t20, 1);
    *((char **)t3) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(58, ng0);

LAB16:    xsi_set_current_line(59, ng0);
    t21 = (t1 + 4712);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng6)));
    memset(t25, 0, 8);
    t26 = (t23 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB20;

LAB17:    if (t37 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t25) = 1;

LAB20:    t41 = (t25 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t25);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(60, ng0);
    t4 = (t1 + 5032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 4872);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 4872);
    t12 = (t11 + 72U);
    t18 = *((char **)t12);
    t19 = (t1 + 4872);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t1 + 4712);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t7, 24, t10, t18, t21, 2, 1, t24, 16, 2);
    t26 = (t1 + 1120);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng8, 2, t26, (char)118, t7, 24);

LAB23:    xsi_set_current_line(61, ng0);
    t4 = (t1 + 4712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng9)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t6, 16, t8, 32);
    t9 = (t1 + 4712);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 16);
    goto LAB7;

LAB19:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(59, ng0);
    t47 = (t1 + 5032);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t1 + 4872);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t54 = (t1 + 4872);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t1 + 4872);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = (t1 + 4712);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    xsi_vlog_generic_get_array_select_value(t53, 24, t52, t56, t59, 2, 1, t62, 16, 2);
    t63 = (t1 + 1120);
    xsi_vlogfile_fwrite(*((unsigned int *)t49), 0, 0, 1, ng7, 2, t63, (char)118, t53, 24);
    goto LAB23;

}

static void Initial_67_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(67, ng0);

LAB2:    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2792);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_71_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6008);
    xsi_process_wait(t2, 10LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2792);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_73_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(73, ng0);

LAB2:    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 4392);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 3592);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 3752);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3912);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4232);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4072);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(80, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4552);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 24);
    xsi_set_current_line(82, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 3432);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4712);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Initial_87_3(char *t0)
{
    char t6[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    t1 = (t0 + 6696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);

LAB4:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(90, ng0);

LAB5:    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:
LAB1:    return;
LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(90, ng0);
    t16 = (t0 + 7280);
    *((int *)t16) = 1;
    t17 = (t0 + 6728);
    *((char **)t17) = t16;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(91, ng0);

LAB14:    xsi_set_current_line(92, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 3272);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2392U);
    t3 = *((char **)t2);
    t2 = (t0 + 4072);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    t4 = (t0 + 4232);
    xsi_vlogvar_assign_value(t4, t3, 8, 0, 8);
    t5 = (t0 + 3912);
    xsi_vlogvar_assign_value(t5, t3, 16, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6504);
    xsi_process_wait(t2, 50LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB16;

LAB17:
LAB18:    goto LAB5;

LAB16:    xsi_set_current_line(97, ng0);

LAB19:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 2072U);
    t5 = *((char **)t4);
    t4 = (t0 + 1912U);
    t7 = *((char **)t4);
    t4 = (t0 + 1752U);
    t8 = *((char **)t4);
    xsi_vlogtype_concat(t6, 24, 24, 3U, t8, 8, t7, 8, t5, 8);
    t4 = (t0 + 4872);
    t9 = (t0 + 4872);
    t10 = (t9 + 72U);
    t16 = *((char **)t10);
    t17 = (t0 + 4872);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t22 = (t0 + 4712);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t20, t21, t16, t19, 2, 1, t24, 16, 2);
    t25 = (t20 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t21 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 16, t5, 32);
    t7 = (t0 + 4712);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    goto LAB18;

LAB20:    t32 = *((unsigned int *)t20);
    t33 = *((unsigned int *)t21);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t6, 0, *((unsigned int *)t21), t35);
    goto LAB21;

}

static void Initial_104_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);

LAB4:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6752);
    xsi_process_wait(t2, 6000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 6752);
    t4 = (t0 + 1120);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB8:    t6 = (t0 + 6848);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB10:    if (t14 != 0)
        goto LAB11;

LAB6:    t7 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t7);

LAB7:    t15 = (t0 + 6848);
    t16 = *((char **)t15);
    t15 = (t0 + 1120);
    t17 = (t0 + 6752);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6752);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t6 = (t0 + 6944U);
    *((char **)t6) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(106, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001676832656_1985558087_init()
{
	static char *pe[] = {(void *)Initial_67_0,(void *)Always_71_1,(void *)Initial_73_2,(void *)Initial_87_3,(void *)Initial_104_4};
	static char *se[] = {(void *)sp_writeCOE};
	xsi_register_didat("work_m_00000000001676832656_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000001676832656_1985558087.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
