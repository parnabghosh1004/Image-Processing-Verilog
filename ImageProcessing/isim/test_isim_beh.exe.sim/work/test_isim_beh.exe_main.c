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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_1202524512_init();
    xilinxcorelib_ver_m_00000000001358910285_4165898115_init();
    xilinxcorelib_ver_m_00000000001687936702_3032421319_init();
    xilinxcorelib_ver_m_00000000000277421008_3045264164_init();
    xilinxcorelib_ver_m_00000000001603977570_0284800113_init();
    work_m_00000000003869038185_0450250084_init();
    work_m_00000000002952071785_0286164271_init();
    work_m_00000000001676832656_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001676832656_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
