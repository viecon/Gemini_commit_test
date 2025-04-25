verilator -trace -cc hw1_tb.v -exe hw1_tb.cpp 
make -C obj_dir -f Vhw1_tb.mk Vhw1_tb
./obj_dir/Vhw1_tb
gtkwave waveform.vcd