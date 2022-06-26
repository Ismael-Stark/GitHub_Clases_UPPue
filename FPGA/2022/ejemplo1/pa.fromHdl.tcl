
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name ejemplo1 -dir "D:/OneDrive - Soluciones Marva/Xilinx/2022/ejemplo1/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "MAIN.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {main.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top MAIN $srcset
add_files [list {MAIN.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
