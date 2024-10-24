#include "Vtop.h" 
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include <iostream>
#include <chrono>
#include <thread>

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vtop* top = new Vtop;       //Vtop instead of Vcounter

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("counter.vcd");

    //init Vbuddy
    if (vbdOpen() != 1){
        return -1;
    }
    vbdHeader("Lab 1: Counter");
    vbdSetMode(1);

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    //top->en = 0;
    top->en = 0;                    //updated ld to en
    top->v = vbdValue();

    // run simulation for many clock cycles
    for (i = 0; i < 300; i++) {

        // dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++) {
            tfp->dump(2*i+clk);  // unit is in ps!!!
            top->clk = !top->clk;
            top->eval();
        }
    
        // send count to vbuddy
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        vbdHex(4, (int(top->bcd) >> 16) & 0xF);     //updated bcd to count
        vbdHex(3, (int(top->bcd) >> 8) & 0xF);
        vbdHex(2, (int(top->bcd) >> 4) & 0xF);
        vbdHex(1, int(top->bcd) & 0xF);
        vbdCycle(i + 1);
        // end of output section

        // Change rst and en signals during simulation
        
        top->rst = (i < 2) | (i == 15);
        top->en = vbdFlag();

        if (Verilated::gotFinish()) exit(0);
    }
    vbdClose(); // closes vbuddy
    tfp->close();
    exit(0);
}
