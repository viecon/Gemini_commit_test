verilator --trace --binary -j 0 -Wall hw1_tb.v
./obj_dir/Vhw1_tb
# gtkwave waveform.vcd