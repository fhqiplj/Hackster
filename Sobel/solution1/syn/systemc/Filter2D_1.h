// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4_AR70530_AR70530
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Filter2D_1_HH_
#define _Filter2D_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "image_filter_mux_hbi.h"
#include "image_filter_mul_ibs.h"
#include "image_filter_ama_jbC.h"
#include "image_filter_mac_kbM.h"
#include "image_filter_mac_lbW.h"
#include "Filter2D_1_k_buf_eOg.h"

namespace ap_rtl {

struct Filter2D_1 : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > p_src_data_stream_V_dout;
    sc_in< sc_logic > p_src_data_stream_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_V_read;
    sc_out< sc_lv<8> > p_dst_data_stream_V_din;
    sc_in< sc_logic > p_dst_data_stream_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_V_write;
    sc_signal< sc_lv<8> > ap_var_for_const0;


    // Module declarations
    Filter2D_1(sc_module_name name);
    SC_HAS_PROCESS(Filter2D_1);

    ~Filter2D_1();

    sc_trace_file* mVcdFile;

    Filter2D_1_k_buf_eOg* k_buf_0_val_3_U;
    Filter2D_1_k_buf_eOg* k_buf_0_val_4_U;
    Filter2D_1_k_buf_eOg* k_buf_0_val_5_U;
    image_filter_mux_hbi<1,1,8,8,8,2,8>* image_filter_mux_hbi_U29;
    image_filter_mux_hbi<1,1,8,8,8,2,8>* image_filter_mux_hbi_U30;
    image_filter_mux_hbi<1,1,8,8,8,2,8>* image_filter_mux_hbi_U31;
    image_filter_mux_hbi<1,1,8,8,8,2,8>* image_filter_mux_hbi_U32;
    image_filter_mux_hbi<1,1,8,8,8,2,8>* image_filter_mux_hbi_U33;
    image_filter_mux_hbi<1,1,8,8,8,2,8>* image_filter_mux_hbi_U34;
    image_filter_mul_ibs<1,1,8,14,21>* image_filter_mul_ibs_U35;
    image_filter_ama_jbC<1,1,8,8,11,24,25>* image_filter_ama_jbC_U36;
    image_filter_mac_kbM<1,1,8,11,21,21>* image_filter_mac_kbM_U37;
    image_filter_mac_lbW<1,1,8,11,24,25>* image_filter_mac_lbW_U38;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > p_src_data_stream_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond388_i_reg_1446;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_exitcond388_i_reg_1446;
    sc_signal< sc_lv<1> > or_cond_i_i_reg_1455;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_or_cond_i_i_reg_1455;
    sc_signal< sc_lv<1> > icmp_reg_1411;
    sc_signal< sc_lv<1> > tmp_s_reg_1402;
    sc_signal< sc_logic > p_dst_data_stream_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_lv<1> > or_cond_i_reg_1476;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter4_or_cond_i_reg_1476;
    sc_signal< sc_lv<11> > t_V_2_reg_299;
    sc_signal< sc_lv<1> > exitcond389_i_fu_314_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > i_V_fu_320_p2;
    sc_signal< sc_lv<10> > i_V_reg_1397;
    sc_signal< sc_lv<1> > tmp_s_fu_326_p2;
    sc_signal< sc_lv<1> > tmp_601_not_fu_332_p2;
    sc_signal< sc_lv<1> > tmp_601_not_reg_1406;
    sc_signal< sc_lv<1> > icmp_fu_348_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_354_p2;
    sc_signal< sc_lv<1> > tmp_2_reg_1416;
    sc_signal< sc_lv<1> > tmp_645_1_fu_360_p2;
    sc_signal< sc_lv<1> > tmp_645_1_reg_1420;
    sc_signal< sc_lv<1> > tmp_3_fu_366_p2;
    sc_signal< sc_lv<1> > tmp_3_reg_1424;
    sc_signal< sc_lv<2> > row_assign_s_fu_522_p2;
    sc_signal< sc_lv<2> > row_assign_s_reg_1431;
    sc_signal< sc_lv<2> > row_assign_13_1_t_fu_560_p2;
    sc_signal< sc_lv<2> > row_assign_13_1_t_reg_1436;
    sc_signal< sc_lv<2> > row_assign_13_2_t_fu_598_p2;
    sc_signal< sc_lv<2> > row_assign_13_2_t_reg_1441;
    sc_signal< sc_lv<1> > exitcond388_i_fu_608_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_predicate_op149_read_state5;
    sc_signal< bool > ap_predicate_op160_read_state5;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter5;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_exitcond388_i_reg_1446;
    sc_signal< sc_lv<11> > j_V_fu_614_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > or_cond_i_i_fu_666_p2;
    sc_signal< sc_lv<13> > x_fu_740_p3;
    sc_signal< sc_lv<13> > x_reg_1459;
    sc_signal< sc_lv<2> > tmp_45_fu_748_p1;
    sc_signal< sc_lv<2> > tmp_45_reg_1464;
    sc_signal< sc_lv<2> > ap_reg_pp0_iter1_tmp_45_reg_1464;
    sc_signal< sc_lv<1> > brmerge_fu_752_p2;
    sc_signal< sc_lv<1> > brmerge_reg_1469;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_brmerge_reg_1469;
    sc_signal< sc_lv<1> > or_cond_i_fu_757_p2;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_or_cond_i_reg_1476;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_or_cond_i_reg_1476;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter3_or_cond_i_reg_1476;
    sc_signal< sc_lv<11> > k_buf_0_val_3_addr_reg_1480;
    sc_signal< sc_lv<11> > k_buf_0_val_4_addr_reg_1486;
    sc_signal< sc_lv<11> > k_buf_0_val_5_addr_reg_1492;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_6_fu_899_p3;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_6_reg_1498;
    sc_signal< sc_lv<8> > ap_reg_pp0_iter3_src_kernel_win_0_va_6_reg_1498;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_7_fu_917_p3;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_7_reg_1504;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_8_fu_935_p3;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_8_reg_1510;
    sc_signal< sc_lv<21> > r_V_10_1_1_fu_1283_p2;
    sc_signal< sc_lv<21> > r_V_10_1_1_reg_1516;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_16_reg_1521;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_9_reg_1526;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_12_reg_1532;
    sc_signal< sc_lv<25> > grp_fu_1289_p4;
    sc_signal< sc_lv<25> > p_Val2_86_0_2_reg_1538;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<25> > tmp3_fu_1060_p2;
    sc_signal< sc_lv<25> > tmp3_reg_1543;
    sc_signal< sc_lv<27> > p_Val2_1_fu_1194_p2;
    sc_signal< sc_lv<27> > p_Val2_1_reg_1548;
    sc_signal< sc_lv<8> > p_Val2_2_reg_1553;
    sc_signal< sc_lv<1> > tmp_48_reg_1558;
    sc_signal< sc_lv<5> > tmp_35_reg_1563;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter2_state5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<11> > k_buf_0_val_3_address0;
    sc_signal< sc_logic > k_buf_0_val_3_ce0;
    sc_signal< sc_lv<8> > k_buf_0_val_3_q0;
    sc_signal< sc_logic > k_buf_0_val_3_ce1;
    sc_signal< sc_logic > k_buf_0_val_3_we1;
    sc_signal< sc_lv<11> > k_buf_0_val_4_address0;
    sc_signal< sc_logic > k_buf_0_val_4_ce0;
    sc_signal< sc_lv<8> > k_buf_0_val_4_q0;
    sc_signal< sc_logic > k_buf_0_val_4_ce1;
    sc_signal< sc_logic > k_buf_0_val_4_we1;
    sc_signal< sc_lv<8> > k_buf_0_val_4_d1;
    sc_signal< sc_lv<11> > k_buf_0_val_5_address0;
    sc_signal< sc_logic > k_buf_0_val_5_ce0;
    sc_signal< sc_lv<8> > k_buf_0_val_5_q0;
    sc_signal< sc_logic > k_buf_0_val_5_ce1;
    sc_signal< sc_logic > k_buf_0_val_5_we1;
    sc_signal< sc_lv<8> > k_buf_0_val_5_d1;
    sc_signal< sc_lv<10> > t_V_reg_288;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > tmp_26_fu_765_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_fu_168;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_1_fu_172;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_2_fu_176;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_3_fu_180;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_4_fu_184;
    sc_signal< sc_lv<8> > src_kernel_win_0_va_5_fu_188;
    sc_signal< sc_lv<8> > right_border_buf_0_s_fu_192;
    sc_signal< sc_lv<8> > col_buf_0_val_0_0_fu_807_p3;
    sc_signal< sc_lv<8> > right_border_buf_0_1_fu_196;
    sc_signal< sc_lv<8> > right_border_buf_0_2_fu_200;
    sc_signal< sc_lv<8> > right_border_buf_0_3_fu_204;
    sc_signal< sc_lv<8> > col_buf_0_val_1_0_fu_826_p3;
    sc_signal< sc_lv<8> > right_border_buf_0_4_fu_208;
    sc_signal< sc_lv<8> > right_border_buf_0_5_fu_212;
    sc_signal< sc_lv<8> > col_buf_0_val_2_0_fu_845_p3;
    sc_signal< sc_lv<9> > tmp_7_fu_338_p4;
    sc_signal< sc_lv<11> > t_V_cast_fu_310_p1;
    sc_signal< sc_lv<11> > tmp_4_fu_372_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_382_p3;
    sc_signal< sc_lv<1> > tmp_6_fu_396_p2;
    sc_signal< sc_lv<1> > rev_fu_390_p2;
    sc_signal< sc_lv<1> > tmp_11_fu_408_p3;
    sc_signal< sc_lv<11> > p_assign_s_fu_416_p2;
    sc_signal< sc_lv<11> > p_p2_i425_i_fu_422_p3;
    sc_signal< sc_lv<2> > tmp_14_fu_434_p1;
    sc_signal< sc_lv<11> > p_assign_14_1_fu_454_p2;
    sc_signal< sc_lv<11> > p_assign_14_2_fu_480_p2;
    sc_signal< sc_lv<1> > tmp_8_fu_438_p2;
    sc_signal< sc_lv<2> > tmp_12_fu_430_p1;
    sc_signal< sc_lv<2> > p_assign_1_fu_444_p2;
    sc_signal< sc_lv<1> > or_cond_i424_i_fu_402_p2;
    sc_signal< sc_lv<2> > tmp_9_fu_378_p1;
    sc_signal< sc_lv<2> > p_p2_i425_i_cast_cast_2_fu_506_p3;
    sc_signal< sc_lv<2> > y_2_fu_514_p3;
    sc_signal< sc_lv<2> > tmp_15_fu_450_p1;
    sc_signal< sc_lv<2> > tmp_24_fu_476_p1;
    sc_signal< sc_lv<1> > tmp_21_fu_468_p3;
    sc_signal< sc_lv<2> > tmp_38_fu_534_p2;
    sc_signal< sc_lv<2> > tmp_39_fu_540_p1;
    sc_signal< sc_lv<1> > tmp_20_fu_460_p3;
    sc_signal< sc_lv<2> > tmp_5_fu_544_p3;
    sc_signal< sc_lv<2> > tmp_1_fu_528_p2;
    sc_signal< sc_lv<2> > tmp_13_fu_552_p3;
    sc_signal< sc_lv<2> > tmp_29_fu_502_p1;
    sc_signal< sc_lv<1> > tmp_27_fu_494_p3;
    sc_signal< sc_lv<2> > tmp_40_fu_572_p2;
    sc_signal< sc_lv<2> > tmp_41_fu_578_p1;
    sc_signal< sc_lv<1> > tmp_25_fu_486_p3;
    sc_signal< sc_lv<2> > tmp_17_fu_582_p3;
    sc_signal< sc_lv<2> > tmp_16_fu_566_p2;
    sc_signal< sc_lv<2> > tmp_18_fu_590_p3;
    sc_signal< sc_lv<10> > tmp_42_fu_620_p4;
    sc_signal< sc_lv<12> > t_V_4_cast_fu_604_p1;
    sc_signal< sc_lv<12> > ImagLoc_x_fu_636_p2;
    sc_signal< sc_lv<1> > tmp_43_fu_646_p3;
    sc_signal< sc_lv<1> > tmp_22_fu_660_p2;
    sc_signal< sc_lv<1> > rev1_fu_654_p2;
    sc_signal< sc_lv<1> > tmp_44_fu_672_p3;
    sc_signal< sc_lv<12> > p_assign_3_fu_680_p2;
    sc_signal< sc_lv<12> > p_p2_i_i_fu_686_p3;
    sc_signal< sc_lv<12> > p_assign_4_fu_704_p2;
    sc_signal< sc_lv<13> > ImagLoc_x_cast_cast_s_fu_642_p1;
    sc_signal< sc_lv<13> > p_assign_4_cast_fu_710_p1;
    sc_signal< sc_lv<1> > tmp_26_not_fu_722_p2;
    sc_signal< sc_lv<1> > tmp_23_fu_698_p2;
    sc_signal< sc_lv<1> > sel_tmp7_fu_728_p2;
    sc_signal< sc_lv<1> > sel_tmp8_fu_734_p2;
    sc_signal< sc_lv<13> > p_p2_i_i_cast34_cast_s_fu_694_p1;
    sc_signal< sc_lv<13> > sel_tmp_fu_714_p3;
    sc_signal< sc_lv<1> > icmp1_fu_630_p2;
    sc_signal< sc_lv<32> > col_assign_cast_fu_762_p1;
    sc_signal< sc_lv<2> > col_assign_6_t_fu_790_p2;
    sc_signal< sc_lv<8> > tmp_28_fu_795_p5;
    sc_signal< sc_lv<8> > tmp_30_fu_814_p5;
    sc_signal< sc_lv<8> > tmp_31_fu_833_p5;
    sc_signal< sc_lv<8> > tmp_32_fu_888_p5;
    sc_signal< sc_lv<8> > tmp_33_fu_906_p5;
    sc_signal< sc_lv<8> > tmp_34_fu_924_p5;
    sc_signal< sc_lv<19> > p_shl1_fu_976_p3;
    sc_signal< sc_lv<10> > p_shl2_fu_988_p3;
    sc_signal< sc_lv<20> > p_shl1_cast_fu_984_p1;
    sc_signal< sc_lv<20> > p_shl2_cast_fu_996_p1;
    sc_signal< sc_lv<20> > r_V_10_0_1_fu_1000_p2;
    sc_signal< sc_lv<24> > r_V_10_0_1_cast_fu_1006_p1;
    sc_signal< sc_lv<19> > p_shl5_fu_1017_p3;
    sc_signal< sc_lv<10> > p_shl6_fu_1028_p3;
    sc_signal< sc_lv<20> > p_shl5_cast_fu_1024_p1;
    sc_signal< sc_lv<20> > p_shl6_cast_fu_1035_p1;
    sc_signal< sc_lv<20> > r_V_10_1_2_fu_1039_p2;
    sc_signal< sc_lv<24> > r_V_10_1_2_cast_fu_1045_p1;
    sc_signal< sc_lv<21> > grp_fu_1299_p3;
    sc_signal< sc_lv<25> > tmp4_cast_fu_1057_p1;
    sc_signal< sc_lv<25> > tmp_689_1_2_cast_cas_fu_1049_p1;
    sc_signal< sc_lv<19> > p_shl3_fu_1097_p3;
    sc_signal< sc_lv<10> > p_shl4_fu_1108_p3;
    sc_signal< sc_lv<20> > p_shl3_cast_fu_1104_p1;
    sc_signal< sc_lv<20> > p_shl4_cast_fu_1115_p1;
    sc_signal< sc_lv<20> > r_V_10_1_fu_1119_p2;
    sc_signal< sc_lv<24> > r_V_10_1_cast_fu_1125_p1;
    sc_signal< sc_lv<26> > p_Val2_86_0_2_cast_fu_1094_p1;
    sc_signal< sc_lv<26> > tmp_689_1_cast_fu_1129_p1;
    sc_signal< sc_lv<26> > tmp3_cast_fu_1139_p1;
    sc_signal< sc_lv<26> > tmp2_fu_1133_p2;
    sc_signal< sc_lv<26> > p_Val2_86_2_fu_1142_p2;
    sc_signal< sc_lv<19> > p_shl_fu_1152_p3;
    sc_signal< sc_lv<10> > p_shl7_fu_1163_p3;
    sc_signal< sc_lv<20> > p_shl_cast_fu_1159_p1;
    sc_signal< sc_lv<20> > p_shl7_cast_fu_1170_p1;
    sc_signal< sc_lv<20> > r_V_10_2_1_fu_1174_p2;
    sc_signal< sc_lv<24> > r_V_10_2_1_cast_fu_1180_p1;
    sc_signal< sc_lv<25> > grp_fu_1307_p3;
    sc_signal< sc_lv<27> > tmp5_cast_fu_1191_p1;
    sc_signal< sc_lv<27> > p_Val2_86_2_cast_fu_1148_p1;
    sc_signal< sc_lv<8> > tmp_1_i_i_fu_1228_p1;
    sc_signal< sc_lv<8> > p_Val2_3_fu_1238_p2;
    sc_signal< sc_lv<1> > tmp_49_fu_1231_p3;
    sc_signal< sc_lv<1> > tmp_50_fu_1243_p3;
    sc_signal< sc_lv<1> > not_Result_9_i_i_fu_1251_p2;
    sc_signal< sc_lv<1> > Range1_all_zeros_fu_1263_p2;
    sc_signal< sc_lv<1> > carry_fu_1257_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_not_i_i_fu_1268_p2;
    sc_signal< sc_lv<8> > r_V_10_1_1_fu_1283_p0;
    sc_signal< sc_lv<14> > r_V_10_1_1_fu_1283_p1;
    sc_signal< sc_lv<8> > grp_fu_1289_p0;
    sc_signal< sc_lv<8> > grp_fu_1289_p1;
    sc_signal< sc_lv<11> > grp_fu_1289_p2;
    sc_signal< sc_lv<24> > grp_fu_1289_p3;
    sc_signal< sc_lv<8> > grp_fu_1299_p0;
    sc_signal< sc_lv<11> > grp_fu_1299_p1;
    sc_signal< sc_lv<8> > grp_fu_1307_p0;
    sc_signal< sc_lv<11> > grp_fu_1307_p1;
    sc_signal< sc_lv<24> > grp_fu_1307_p2;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<9> > grp_fu_1289_p00;
    sc_signal< sc_lv<9> > grp_fu_1289_p10;
    sc_signal< sc_lv<25> > grp_fu_1289_p30;
    sc_signal< sc_lv<19> > grp_fu_1299_p00;
    sc_signal< sc_lv<19> > grp_fu_1307_p00;
    sc_signal< sc_lv<25> > grp_fu_1307_p20;
    sc_signal< sc_lv<21> > r_V_10_1_1_fu_1283_p00;
    sc_signal< bool > ap_condition_348;
    sc_signal< bool > ap_condition_342;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state9;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<10> ap_const_lv10_2D2;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_2D0;
    static const sc_lv<10> ap_const_lv10_2CF;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<11> ap_const_lv11_2D0;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<11> ap_const_lv11_7FE;
    static const sc_lv<11> ap_const_lv11_7FD;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<11> ap_const_lv11_502;
    static const sc_lv<12> ap_const_lv12_FFF;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<12> ap_const_lv12_500;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<12> ap_const_lv12_9FE;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<21> ap_const_lv21_1171;
    static const sc_lv<19> ap_const_lv19_3A8;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ImagLoc_x_cast_cast_s_fu_642_p1();
    void thread_ImagLoc_x_fu_636_p2();
    void thread_Range1_all_zeros_fu_1263_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_block_state6_pp0_stage0_iter3();
    void thread_ap_block_state7_pp0_stage0_iter4();
    void thread_ap_block_state8_pp0_stage0_iter5();
    void thread_ap_condition_342();
    void thread_ap_condition_348();
    void thread_ap_condition_pp0_exit_iter2_state5();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_predicate_op149_read_state5();
    void thread_ap_predicate_op160_read_state5();
    void thread_ap_ready();
    void thread_brmerge_fu_752_p2();
    void thread_brmerge_i_i_not_i_i_fu_1268_p2();
    void thread_carry_fu_1257_p2();
    void thread_col_assign_6_t_fu_790_p2();
    void thread_col_assign_cast_fu_762_p1();
    void thread_col_buf_0_val_0_0_fu_807_p3();
    void thread_col_buf_0_val_1_0_fu_826_p3();
    void thread_col_buf_0_val_2_0_fu_845_p3();
    void thread_exitcond388_i_fu_608_p2();
    void thread_exitcond389_i_fu_314_p2();
    void thread_grp_fu_1289_p0();
    void thread_grp_fu_1289_p00();
    void thread_grp_fu_1289_p1();
    void thread_grp_fu_1289_p10();
    void thread_grp_fu_1289_p2();
    void thread_grp_fu_1289_p3();
    void thread_grp_fu_1289_p30();
    void thread_grp_fu_1299_p0();
    void thread_grp_fu_1299_p00();
    void thread_grp_fu_1299_p1();
    void thread_grp_fu_1307_p0();
    void thread_grp_fu_1307_p00();
    void thread_grp_fu_1307_p1();
    void thread_grp_fu_1307_p2();
    void thread_grp_fu_1307_p20();
    void thread_i_V_fu_320_p2();
    void thread_icmp1_fu_630_p2();
    void thread_icmp_fu_348_p2();
    void thread_j_V_fu_614_p2();
    void thread_k_buf_0_val_3_address0();
    void thread_k_buf_0_val_3_ce0();
    void thread_k_buf_0_val_3_ce1();
    void thread_k_buf_0_val_3_we1();
    void thread_k_buf_0_val_4_address0();
    void thread_k_buf_0_val_4_ce0();
    void thread_k_buf_0_val_4_ce1();
    void thread_k_buf_0_val_4_d1();
    void thread_k_buf_0_val_4_we1();
    void thread_k_buf_0_val_5_address0();
    void thread_k_buf_0_val_5_ce0();
    void thread_k_buf_0_val_5_ce1();
    void thread_k_buf_0_val_5_d1();
    void thread_k_buf_0_val_5_we1();
    void thread_not_Result_9_i_i_fu_1251_p2();
    void thread_or_cond_i424_i_fu_402_p2();
    void thread_or_cond_i_fu_757_p2();
    void thread_or_cond_i_i_fu_666_p2();
    void thread_p_Val2_1_fu_1194_p2();
    void thread_p_Val2_3_fu_1238_p2();
    void thread_p_Val2_86_0_2_cast_fu_1094_p1();
    void thread_p_Val2_86_2_cast_fu_1148_p1();
    void thread_p_Val2_86_2_fu_1142_p2();
    void thread_p_assign_14_1_fu_454_p2();
    void thread_p_assign_14_2_fu_480_p2();
    void thread_p_assign_1_fu_444_p2();
    void thread_p_assign_3_fu_680_p2();
    void thread_p_assign_4_cast_fu_710_p1();
    void thread_p_assign_4_fu_704_p2();
    void thread_p_assign_s_fu_416_p2();
    void thread_p_dst_data_stream_V_blk_n();
    void thread_p_dst_data_stream_V_din();
    void thread_p_dst_data_stream_V_write();
    void thread_p_p2_i425_i_cast_cast_2_fu_506_p3();
    void thread_p_p2_i425_i_fu_422_p3();
    void thread_p_p2_i_i_cast34_cast_s_fu_694_p1();
    void thread_p_p2_i_i_fu_686_p3();
    void thread_p_shl1_cast_fu_984_p1();
    void thread_p_shl1_fu_976_p3();
    void thread_p_shl2_cast_fu_996_p1();
    void thread_p_shl2_fu_988_p3();
    void thread_p_shl3_cast_fu_1104_p1();
    void thread_p_shl3_fu_1097_p3();
    void thread_p_shl4_cast_fu_1115_p1();
    void thread_p_shl4_fu_1108_p3();
    void thread_p_shl5_cast_fu_1024_p1();
    void thread_p_shl5_fu_1017_p3();
    void thread_p_shl6_cast_fu_1035_p1();
    void thread_p_shl6_fu_1028_p3();
    void thread_p_shl7_cast_fu_1170_p1();
    void thread_p_shl7_fu_1163_p3();
    void thread_p_shl_cast_fu_1159_p1();
    void thread_p_shl_fu_1152_p3();
    void thread_p_src_data_stream_V_blk_n();
    void thread_p_src_data_stream_V_read();
    void thread_r_V_10_0_1_cast_fu_1006_p1();
    void thread_r_V_10_0_1_fu_1000_p2();
    void thread_r_V_10_1_1_fu_1283_p0();
    void thread_r_V_10_1_1_fu_1283_p00();
    void thread_r_V_10_1_1_fu_1283_p1();
    void thread_r_V_10_1_2_cast_fu_1045_p1();
    void thread_r_V_10_1_2_fu_1039_p2();
    void thread_r_V_10_1_cast_fu_1125_p1();
    void thread_r_V_10_1_fu_1119_p2();
    void thread_r_V_10_2_1_cast_fu_1180_p1();
    void thread_r_V_10_2_1_fu_1174_p2();
    void thread_rev1_fu_654_p2();
    void thread_rev_fu_390_p2();
    void thread_row_assign_13_1_t_fu_560_p2();
    void thread_row_assign_13_2_t_fu_598_p2();
    void thread_row_assign_s_fu_522_p2();
    void thread_sel_tmp7_fu_728_p2();
    void thread_sel_tmp8_fu_734_p2();
    void thread_sel_tmp_fu_714_p3();
    void thread_src_kernel_win_0_va_6_fu_899_p3();
    void thread_src_kernel_win_0_va_7_fu_917_p3();
    void thread_src_kernel_win_0_va_8_fu_935_p3();
    void thread_t_V_4_cast_fu_604_p1();
    void thread_t_V_cast_fu_310_p1();
    void thread_tmp2_fu_1133_p2();
    void thread_tmp3_cast_fu_1139_p1();
    void thread_tmp3_fu_1060_p2();
    void thread_tmp4_cast_fu_1057_p1();
    void thread_tmp5_cast_fu_1191_p1();
    void thread_tmp_10_fu_382_p3();
    void thread_tmp_11_fu_408_p3();
    void thread_tmp_12_fu_430_p1();
    void thread_tmp_13_fu_552_p3();
    void thread_tmp_14_fu_434_p1();
    void thread_tmp_15_fu_450_p1();
    void thread_tmp_16_fu_566_p2();
    void thread_tmp_17_fu_582_p3();
    void thread_tmp_18_fu_590_p3();
    void thread_tmp_1_fu_528_p2();
    void thread_tmp_1_i_i_fu_1228_p1();
    void thread_tmp_20_fu_460_p3();
    void thread_tmp_21_fu_468_p3();
    void thread_tmp_22_fu_660_p2();
    void thread_tmp_23_fu_698_p2();
    void thread_tmp_24_fu_476_p1();
    void thread_tmp_25_fu_486_p3();
    void thread_tmp_26_fu_765_p1();
    void thread_tmp_26_not_fu_722_p2();
    void thread_tmp_27_fu_494_p3();
    void thread_tmp_29_fu_502_p1();
    void thread_tmp_2_fu_354_p2();
    void thread_tmp_38_fu_534_p2();
    void thread_tmp_39_fu_540_p1();
    void thread_tmp_3_fu_366_p2();
    void thread_tmp_40_fu_572_p2();
    void thread_tmp_41_fu_578_p1();
    void thread_tmp_42_fu_620_p4();
    void thread_tmp_43_fu_646_p3();
    void thread_tmp_44_fu_672_p3();
    void thread_tmp_45_fu_748_p1();
    void thread_tmp_49_fu_1231_p3();
    void thread_tmp_4_fu_372_p2();
    void thread_tmp_50_fu_1243_p3();
    void thread_tmp_5_fu_544_p3();
    void thread_tmp_601_not_fu_332_p2();
    void thread_tmp_645_1_fu_360_p2();
    void thread_tmp_689_1_2_cast_cas_fu_1049_p1();
    void thread_tmp_689_1_cast_fu_1129_p1();
    void thread_tmp_6_fu_396_p2();
    void thread_tmp_7_fu_338_p4();
    void thread_tmp_8_fu_438_p2();
    void thread_tmp_9_fu_378_p1();
    void thread_tmp_s_fu_326_p2();
    void thread_x_fu_740_p3();
    void thread_y_2_fu_514_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
