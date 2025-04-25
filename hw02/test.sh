verilator --trace --binary -j 0 -Wall sort_tb.v 
./obj_dir/Vsort_tb
# gtkwave waveform.vcd