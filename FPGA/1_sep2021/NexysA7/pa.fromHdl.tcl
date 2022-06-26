
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name NexysA7 -dir "D:/OneDrive - Soluciones Marva/Xilinx/1_sep2021/NexysA7/planAhead_run_2" -part xc7a100tcsg324-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "contador.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {contador.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top contador $srcset
add_files [list {contador.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tcsg324-2
