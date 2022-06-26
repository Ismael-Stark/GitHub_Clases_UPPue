
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name mux4a1_unBit -dir "D:/OneDrive - Soluciones Marva/Xilinx/sep2021/mux4a1_unBit/planAhead_run_2" -part xc3s700afg484-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "mux4a1_unBit.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {mux4a1_unBit.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top mux4a1_unBit $srcset
add_files [list {mux4a1_unBit.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s700afg484-4
