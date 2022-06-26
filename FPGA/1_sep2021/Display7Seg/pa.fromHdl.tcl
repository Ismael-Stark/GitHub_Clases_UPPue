
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Display7Seg -dir "D:/OneDrive - Soluciones Marva/Xilinx/sep2021/Display7Seg/planAhead_run_1" -part xc3s700afg484-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Display7Seg.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Display7Seg.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top Display7Seg $srcset
add_files [list {Display7Seg.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s700afg484-4
