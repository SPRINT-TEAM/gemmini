module Queue_53_inTestHarness( // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406885.2]
  input        clock, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406886.4]
  input        reset, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406887.4]
  output       io_enq_ready, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406888.4]
  input        io_enq_valid, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406888.4]
  input  [7:0] io_enq_bits, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406888.4]
  input        io_deq_ready, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406888.4]
  output       io_deq_valid, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406888.4]
  output [7:0] io_deq_bits // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406888.4]
);
  reg [7:0] ram [0:127]; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
  reg [31:0] _RAND_0;
  wire [7:0] ram__T_11_data; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
  wire [6:0] ram__T_11_addr; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
  wire [7:0] ram__T_3_data; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
  wire [6:0] ram__T_3_addr; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
  wire  ram__T_3_mask; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
  wire  ram__T_3_en; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
  reg [6:0] enq_ptr_value; // @[Counter.scala 29:33:chipyard.TestHarness.GemminiRocketConfig.fir@406891.4]
  reg [31:0] _RAND_1;
  reg [6:0] deq_ptr_value; // @[Counter.scala 29:33:chipyard.TestHarness.GemminiRocketConfig.fir@406892.4]
  reg [31:0] _RAND_2;
  reg  maybe_full; // @[Decoupled.scala 212:27:chipyard.TestHarness.GemminiRocketConfig.fir@406893.4]
  reg [31:0] _RAND_3;
  wire  ptr_match; // @[Decoupled.scala 214:33:chipyard.TestHarness.GemminiRocketConfig.fir@406894.4]
  wire  _T; // @[Decoupled.scala 215:28:chipyard.TestHarness.GemminiRocketConfig.fir@406895.4]
  wire  empty; // @[Decoupled.scala 215:25:chipyard.TestHarness.GemminiRocketConfig.fir@406896.4]
  wire  full; // @[Decoupled.scala 216:24:chipyard.TestHarness.GemminiRocketConfig.fir@406897.4]
  wire  do_enq; // @[Decoupled.scala 40:37:chipyard.TestHarness.GemminiRocketConfig.fir@406898.4]
  wire  do_deq; // @[Decoupled.scala 40:37:chipyard.TestHarness.GemminiRocketConfig.fir@406901.4]
  wire [6:0] _T_5; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@406909.6]
  wire [6:0] _T_7; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@406915.6]
  wire  _T_8; // @[Decoupled.scala 227:16:chipyard.TestHarness.GemminiRocketConfig.fir@406918.4]
  assign ram__T_11_addr = deq_ptr_value;
  assign ram__T_11_data = ram[ram__T_11_addr]; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
  assign ram__T_3_data = io_enq_bits;
  assign ram__T_3_addr = enq_ptr_value;
  assign ram__T_3_mask = 1'h1;
  assign ram__T_3_en = io_enq_ready & io_enq_valid;
  assign ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 214:33:chipyard.TestHarness.GemminiRocketConfig.fir@406894.4]
  assign _T = ~maybe_full; // @[Decoupled.scala 215:28:chipyard.TestHarness.GemminiRocketConfig.fir@406895.4]
  assign empty = ptr_match & _T; // @[Decoupled.scala 215:25:chipyard.TestHarness.GemminiRocketConfig.fir@406896.4]
  assign full = ptr_match & maybe_full; // @[Decoupled.scala 216:24:chipyard.TestHarness.GemminiRocketConfig.fir@406897.4]
  assign do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:chipyard.TestHarness.GemminiRocketConfig.fir@406898.4]
  assign do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:chipyard.TestHarness.GemminiRocketConfig.fir@406901.4]
  assign _T_5 = enq_ptr_value + 7'h1; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@406909.6]
  assign _T_7 = deq_ptr_value + 7'h1; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@406915.6]
  assign _T_8 = do_enq != do_deq; // @[Decoupled.scala 227:16:chipyard.TestHarness.GemminiRocketConfig.fir@406918.4]
  assign io_enq_ready = ~full; // @[Decoupled.scala 232:16:chipyard.TestHarness.GemminiRocketConfig.fir@406925.4]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 231:16:chipyard.TestHarness.GemminiRocketConfig.fir@406923.4]
  assign io_deq_bits = ram__T_11_data; // @[Decoupled.scala 233:15:chipyard.TestHarness.GemminiRocketConfig.fir@406927.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    ram[initvar] = _RAND_0[7:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  enq_ptr_value = _RAND_1[6:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  deq_ptr_value = _RAND_2[6:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  maybe_full = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if(ram__T_3_en & ram__T_3_mask) begin
      ram[ram__T_3_addr] <= ram__T_3_data; // @[Decoupled.scala 209:16:chipyard.TestHarness.GemminiRocketConfig.fir@406890.4]
    end
    if (reset) begin
      enq_ptr_value <= 7'h0;
    end else if (do_enq) begin
      enq_ptr_value <= _T_5;
    end
    if (reset) begin
      deq_ptr_value <= 7'h0;
    end else if (do_deq) begin
      deq_ptr_value <= _T_7;
    end
    if (reset) begin
      maybe_full <= 1'h0;
    end else if (_T_8) begin
      maybe_full <= do_enq;
    end
  end
endmodule
module UARTAdapter_inTestHarness( // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406993.2]
  input   clock, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406994.4]
  input   reset, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406995.4]
  input   io_uart_txd, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406996.4]
  output  io_uart_rxd // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406996.4]
);
  wire  txfifo_clock; // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
  wire  txfifo_reset; // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
  wire  txfifo_io_enq_ready; // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
  wire  txfifo_io_enq_valid; // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
  wire [7:0] txfifo_io_enq_bits; // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
  wire  txfifo_io_deq_ready; // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
  wire  txfifo_io_deq_valid; // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
  wire [7:0] txfifo_io_deq_bits; // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
  wire  rxfifo_clock; // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
  wire  rxfifo_reset; // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
  wire  rxfifo_io_enq_ready; // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
  wire  rxfifo_io_enq_valid; // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
  wire [7:0] rxfifo_io_enq_bits; // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
  wire  rxfifo_io_deq_ready; // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
  wire  rxfifo_io_deq_valid; // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
  wire [7:0] rxfifo_io_deq_bits; // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
  wire  sim_clock; // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
  wire  sim_reset; // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
  wire  sim_serial_in_ready; // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
  wire  sim_serial_in_valid; // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
  wire [7:0] sim_serial_in_bits; // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
  wire  sim_serial_out_ready; // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
  wire  sim_serial_out_valid; // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
  wire [7:0] sim_serial_out_bits; // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
  reg [1:0] txState; // @[UARTAdapter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407004.4]
  reg [31:0] _RAND_0;
  reg [7:0] txData; // @[UARTAdapter.scala 39:19:chipyard.TestHarness.GemminiRocketConfig.fir@407005.4]
  reg [31:0] _RAND_1;
  wire  _T; // @[UARTAdapter.scala 41:49:chipyard.TestHarness.GemminiRocketConfig.fir@407006.4]
  wire  _T_1; // @[UARTAdapter.scala 41:61:chipyard.TestHarness.GemminiRocketConfig.fir@407007.4]
  reg [2:0] txDataIdx; // @[Counter.scala 29:33:chipyard.TestHarness.GemminiRocketConfig.fir@407008.4]
  reg [31:0] _RAND_2;
  wire  _T_2; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407012.6]
  wire [2:0] _T_4; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407014.6]
  wire  txDataWrap; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407011.4]
  wire  _T_5; // @[UARTAdapter.scala 43:51:chipyard.TestHarness.GemminiRocketConfig.fir@407018.4]
  wire  _T_6; // @[UARTAdapter.scala 43:63:chipyard.TestHarness.GemminiRocketConfig.fir@407019.4]
  reg [9:0] txBaudCount; // @[Counter.scala 29:33:chipyard.TestHarness.GemminiRocketConfig.fir@407020.4]
  reg [31:0] _RAND_3;
  wire  _T_7; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407024.6]
  wire [9:0] _T_9; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407026.6]
  wire  txBaudWrap; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407023.4]
  wire  _T_10; // @[UARTAdapter.scala 44:53:chipyard.TestHarness.GemminiRocketConfig.fir@407033.4]
  wire  _T_11; // @[UARTAdapter.scala 44:80:chipyard.TestHarness.GemminiRocketConfig.fir@407034.4]
  wire  _T_12; // @[UARTAdapter.scala 44:65:chipyard.TestHarness.GemminiRocketConfig.fir@407035.4]
  wire  _T_13; // @[UARTAdapter.scala 44:88:chipyard.TestHarness.GemminiRocketConfig.fir@407036.4]
  reg [1:0] txSlackCount; // @[Counter.scala 29:33:chipyard.TestHarness.GemminiRocketConfig.fir@407037.4]
  reg [31:0] _RAND_4;
  wire  _T_14; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407041.6]
  wire [1:0] _T_16; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407043.6]
  wire  txSlackWrap; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407040.4]
  wire  _T_17; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407047.4]
  wire  _T_18; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407055.6]
  wire  _T_19; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407062.8]
  wire [7:0] _GEN_35; // @[UARTAdapter.scala 60:41:chipyard.TestHarness.GemminiRocketConfig.fir@407065.12]
  wire [7:0] _T_20; // @[UARTAdapter.scala 60:41:chipyard.TestHarness.GemminiRocketConfig.fir@407065.12]
  wire [7:0] _T_21; // @[UARTAdapter.scala 60:26:chipyard.TestHarness.GemminiRocketConfig.fir@407066.12]
  wire  _T_24; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407080.10]
  wire  _T_26; // @[UARTAdapter.scala 69:32:chipyard.TestHarness.GemminiRocketConfig.fir@407083.12]
  reg [1:0] rxState; // @[UARTAdapter.scala 79:24:chipyard.TestHarness.GemminiRocketConfig.fir@407090.4]
  reg [31:0] _RAND_5;
  reg [9:0] rxBaudCount; // @[Counter.scala 29:33:chipyard.TestHarness.GemminiRocketConfig.fir@407091.4]
  reg [31:0] _RAND_6;
  wire  _T_27; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407095.6]
  wire [9:0] _T_29; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407097.6]
  wire  rxBaudWrap; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407094.4]
  wire  _T_30; // @[UARTAdapter.scala 83:49:chipyard.TestHarness.GemminiRocketConfig.fir@407104.4]
  wire  _T_31; // @[UARTAdapter.scala 83:61:chipyard.TestHarness.GemminiRocketConfig.fir@407105.4]
  wire  _T_32; // @[UARTAdapter.scala 83:84:chipyard.TestHarness.GemminiRocketConfig.fir@407106.4]
  reg [2:0] rxDataIdx; // @[Counter.scala 29:33:chipyard.TestHarness.GemminiRocketConfig.fir@407107.4]
  reg [31:0] _RAND_7;
  wire  _T_33; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407111.6]
  wire [2:0] _T_35; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407113.6]
  wire  rxDataWrap; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407110.4]
  wire  _T_36; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407118.4]
  wire  _T_37; // @[UARTAdapter.scala 89:24:chipyard.TestHarness.GemminiRocketConfig.fir@407121.6]
  wire  _T_38; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407127.6]
  wire  _T_39; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407135.8]
  wire [7:0] _T_40; // @[UARTAdapter.scala 100:42:chipyard.TestHarness.GemminiRocketConfig.fir@407137.10]
  wire  _T_42; // @[UARTAdapter.scala 101:23:chipyard.TestHarness.GemminiRocketConfig.fir@407140.10]
  wire  _GEN_29; // @[Conditional.scala 39:67:chipyard.TestHarness.GemminiRocketConfig.fir@407136.8]
  wire  _GEN_31; // @[Conditional.scala 39:67:chipyard.TestHarness.GemminiRocketConfig.fir@407128.6]
  wire  _T_44; // @[UARTAdapter.scala 106:48:chipyard.TestHarness.GemminiRocketConfig.fir@407146.4]
  wire  _T_45; // @[UARTAdapter.scala 106:62:chipyard.TestHarness.GemminiRocketConfig.fir@407147.4]
  Queue_53_inTestHarness txfifo ( // @[UARTAdapter.scala 32:22:chipyard.TestHarness.GemminiRocketConfig.fir@406998.4]
    .clock(txfifo_clock),
    .reset(txfifo_reset),
    .io_enq_ready(txfifo_io_enq_ready),
    .io_enq_valid(txfifo_io_enq_valid),
    .io_enq_bits(txfifo_io_enq_bits),
    .io_deq_ready(txfifo_io_deq_ready),
    .io_deq_valid(txfifo_io_deq_valid),
    .io_deq_bits(txfifo_io_deq_bits)
  );
  Queue_53_inTestHarness rxfifo ( // @[UARTAdapter.scala 33:22:chipyard.TestHarness.GemminiRocketConfig.fir@407001.4]
    .clock(rxfifo_clock),
    .reset(rxfifo_reset),
    .io_enq_ready(rxfifo_io_enq_ready),
    .io_enq_valid(rxfifo_io_enq_valid),
    .io_enq_bits(rxfifo_io_enq_bits),
    .io_deq_ready(rxfifo_io_deq_ready),
    .io_deq_valid(rxfifo_io_deq_valid),
    .io_deq_bits(rxfifo_io_deq_bits)
  );
  SimUART #(.UARTNO(0)) sim ( // @[UARTAdapter.scala 108:19:chipyard.TestHarness.GemminiRocketConfig.fir@407150.4]
    .clock(sim_clock),
    .reset(sim_reset),
    .serial_in_ready(sim_serial_in_ready),
    .serial_in_valid(sim_serial_in_valid),
    .serial_in_bits(sim_serial_in_bits),
    .serial_out_ready(sim_serial_out_ready),
    .serial_out_valid(sim_serial_out_valid),
    .serial_out_bits(sim_serial_out_bits)
  );
  assign _T = txState == 2'h2; // @[UARTAdapter.scala 41:49:chipyard.TestHarness.GemminiRocketConfig.fir@407006.4]
  assign _T_1 = _T & txfifo_io_enq_ready; // @[UARTAdapter.scala 41:61:chipyard.TestHarness.GemminiRocketConfig.fir@407007.4]
  assign _T_2 = txDataIdx == 3'h7; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407012.6]
  assign _T_4 = txDataIdx + 3'h1; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407014.6]
  assign txDataWrap = _T_1 & _T_2; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407011.4]
  assign _T_5 = txState == 2'h1; // @[UARTAdapter.scala 43:51:chipyard.TestHarness.GemminiRocketConfig.fir@407018.4]
  assign _T_6 = _T_5 & txfifo_io_enq_ready; // @[UARTAdapter.scala 43:63:chipyard.TestHarness.GemminiRocketConfig.fir@407019.4]
  assign _T_7 = txBaudCount == 10'h363; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407024.6]
  assign _T_9 = txBaudCount + 10'h1; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407026.6]
  assign txBaudWrap = _T_6 & _T_7; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407023.4]
  assign _T_10 = txState == 2'h0; // @[UARTAdapter.scala 44:53:chipyard.TestHarness.GemminiRocketConfig.fir@407033.4]
  assign _T_11 = ~io_uart_txd; // @[UARTAdapter.scala 44:80:chipyard.TestHarness.GemminiRocketConfig.fir@407034.4]
  assign _T_12 = _T_10 & _T_11; // @[UARTAdapter.scala 44:65:chipyard.TestHarness.GemminiRocketConfig.fir@407035.4]
  assign _T_13 = _T_12 & txfifo_io_enq_ready; // @[UARTAdapter.scala 44:88:chipyard.TestHarness.GemminiRocketConfig.fir@407036.4]
  assign _T_14 = txSlackCount == 2'h3; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407041.6]
  assign _T_16 = txSlackCount + 2'h1; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407043.6]
  assign txSlackWrap = _T_13 & _T_14; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407040.4]
  assign _T_17 = 2'h0 == txState; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407047.4]
  assign _T_18 = 2'h1 == txState; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407055.6]
  assign _T_19 = 2'h2 == txState; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407062.8]
  assign _GEN_35 = {{7'd0}, io_uart_txd}; // @[UARTAdapter.scala 60:41:chipyard.TestHarness.GemminiRocketConfig.fir@407065.12]
  assign _T_20 = _GEN_35 << txDataIdx; // @[UARTAdapter.scala 60:41:chipyard.TestHarness.GemminiRocketConfig.fir@407065.12]
  assign _T_21 = txData | _T_20; // @[UARTAdapter.scala 60:26:chipyard.TestHarness.GemminiRocketConfig.fir@407066.12]
  assign _T_24 = 2'h3 == txState; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407080.10]
  assign _T_26 = io_uart_txd & txfifo_io_enq_ready; // @[UARTAdapter.scala 69:32:chipyard.TestHarness.GemminiRocketConfig.fir@407083.12]
  assign _T_27 = rxBaudCount == 10'h363; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407095.6]
  assign _T_29 = rxBaudCount + 10'h1; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407097.6]
  assign rxBaudWrap = txfifo_io_enq_ready & _T_27; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407094.4]
  assign _T_30 = rxState == 2'h2; // @[UARTAdapter.scala 83:49:chipyard.TestHarness.GemminiRocketConfig.fir@407104.4]
  assign _T_31 = _T_30 & txfifo_io_enq_ready; // @[UARTAdapter.scala 83:61:chipyard.TestHarness.GemminiRocketConfig.fir@407105.4]
  assign _T_32 = _T_31 & rxBaudWrap; // @[UARTAdapter.scala 83:84:chipyard.TestHarness.GemminiRocketConfig.fir@407106.4]
  assign _T_33 = rxDataIdx == 3'h7; // @[Counter.scala 38:24:chipyard.TestHarness.GemminiRocketConfig.fir@407111.6]
  assign _T_35 = rxDataIdx + 3'h1; // @[Counter.scala 39:22:chipyard.TestHarness.GemminiRocketConfig.fir@407113.6]
  assign rxDataWrap = _T_32 & _T_33; // @[Counter.scala 67:17:chipyard.TestHarness.GemminiRocketConfig.fir@407110.4]
  assign _T_36 = 2'h0 == rxState; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407118.4]
  assign _T_37 = rxBaudWrap & rxfifo_io_deq_valid; // @[UARTAdapter.scala 89:24:chipyard.TestHarness.GemminiRocketConfig.fir@407121.6]
  assign _T_38 = 2'h1 == rxState; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407127.6]
  assign _T_39 = 2'h2 == rxState; // @[Conditional.scala 37:30:chipyard.TestHarness.GemminiRocketConfig.fir@407135.8]
  assign _T_40 = rxfifo_io_deq_bits >> rxDataIdx; // @[UARTAdapter.scala 100:42:chipyard.TestHarness.GemminiRocketConfig.fir@407137.10]
  assign _T_42 = rxDataWrap & rxBaudWrap; // @[UARTAdapter.scala 101:23:chipyard.TestHarness.GemminiRocketConfig.fir@407140.10]
  assign _GEN_29 = _T_39 ? _T_40[0] : 1'h1; // @[Conditional.scala 39:67:chipyard.TestHarness.GemminiRocketConfig.fir@407136.8]
  assign _GEN_31 = _T_38 ? 1'h0 : _GEN_29; // @[Conditional.scala 39:67:chipyard.TestHarness.GemminiRocketConfig.fir@407128.6]
  assign _T_44 = _T_30 & rxDataWrap; // @[UARTAdapter.scala 106:48:chipyard.TestHarness.GemminiRocketConfig.fir@407146.4]
  assign _T_45 = _T_44 & rxBaudWrap; // @[UARTAdapter.scala 106:62:chipyard.TestHarness.GemminiRocketConfig.fir@407147.4]
  assign io_uart_rxd = _T_36 | _GEN_31; // @[UARTAdapter.scala 85:15:chipyard.TestHarness.GemminiRocketConfig.fir@407117.4 UARTAdapter.scala 88:19:chipyard.TestHarness.GemminiRocketConfig.fir@407120.6 UARTAdapter.scala 94:19:chipyard.TestHarness.GemminiRocketConfig.fir@407129.8 UARTAdapter.scala 100:19:chipyard.TestHarness.GemminiRocketConfig.fir@407139.10]
  assign txfifo_clock = clock; // @[:chipyard.TestHarness.GemminiRocketConfig.fir@406999.4]
  assign txfifo_reset = reset; // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407000.4]
  assign txfifo_io_enq_valid = _T_1 & _T_2; // @[UARTAdapter.scala 76:23:chipyard.TestHarness.GemminiRocketConfig.fir@407089.4]
  assign txfifo_io_enq_bits = txData; // @[UARTAdapter.scala 75:23:chipyard.TestHarness.GemminiRocketConfig.fir@407088.4]
  assign txfifo_io_deq_ready = sim_serial_out_ready; // @[UARTAdapter.scala 115:23:chipyard.TestHarness.GemminiRocketConfig.fir@407159.4]
  assign rxfifo_clock = clock; // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407002.4]
  assign rxfifo_reset = reset; // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407003.4]
  assign rxfifo_io_enq_valid = sim_serial_in_valid; // @[UARTAdapter.scala 118:23:chipyard.TestHarness.GemminiRocketConfig.fir@407161.4]
  assign rxfifo_io_enq_bits = sim_serial_in_bits; // @[UARTAdapter.scala 117:22:chipyard.TestHarness.GemminiRocketConfig.fir@407160.4]
  assign rxfifo_io_deq_ready = _T_45 & txfifo_io_enq_ready; // @[UARTAdapter.scala 106:23:chipyard.TestHarness.GemminiRocketConfig.fir@407149.4]
  assign sim_clock = clock; // @[UARTAdapter.scala 110:16:chipyard.TestHarness.GemminiRocketConfig.fir@407154.4]
  assign sim_reset = reset; // @[UARTAdapter.scala 111:16:chipyard.TestHarness.GemminiRocketConfig.fir@407156.4]
  assign sim_serial_in_ready = rxfifo_io_enq_ready; // @[UARTAdapter.scala 119:26:chipyard.TestHarness.GemminiRocketConfig.fir@407162.4]
  assign sim_serial_out_valid = txfifo_io_deq_valid; // @[UARTAdapter.scala 114:27:chipyard.TestHarness.GemminiRocketConfig.fir@407158.4]
  assign sim_serial_out_bits = txfifo_io_deq_bits; // @[UARTAdapter.scala 113:26:chipyard.TestHarness.GemminiRocketConfig.fir@407157.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  txState = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  txData = _RAND_1[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  txDataIdx = _RAND_2[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  txBaudCount = _RAND_3[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  txSlackCount = _RAND_4[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  rxState = _RAND_5[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  rxBaudCount = _RAND_6[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  rxDataIdx = _RAND_7[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      txState <= 2'h0;
    end else if (_T_17) begin
      if (txSlackWrap) begin
        txState <= 2'h1;
      end
    end else if (_T_18) begin
      if (txBaudWrap) begin
        txState <= 2'h2;
      end
    end else if (_T_19) begin
      if (txDataWrap) begin
        if (io_uart_txd) begin
          txState <= 2'h0;
        end else begin
          txState <= 2'h3;
        end
      end else if (txfifo_io_enq_ready) begin
        txState <= 2'h1;
      end
    end else if (_T_24) begin
      if (_T_26) begin
        txState <= 2'h0;
      end
    end
    if (_T_17) begin
      if (txSlackWrap) begin
        txData <= 8'h0;
      end
    end else if (!(_T_18)) begin
      if (_T_19) begin
        if (txfifo_io_enq_ready) begin
          txData <= _T_21;
        end
      end
    end
    if (reset) begin
      txDataIdx <= 3'h0;
    end else if (_T_1) begin
      txDataIdx <= _T_4;
    end
    if (reset) begin
      txBaudCount <= 10'h0;
    end else if (_T_6) begin
      if (_T_7) begin
        txBaudCount <= 10'h0;
      end else begin
        txBaudCount <= _T_9;
      end
    end
    if (reset) begin
      txSlackCount <= 2'h0;
    end else if (_T_13) begin
      txSlackCount <= _T_16;
    end
    if (reset) begin
      rxState <= 2'h0;
    end else if (_T_36) begin
      if (_T_37) begin
        rxState <= 2'h1;
      end
    end else if (_T_38) begin
      if (rxBaudWrap) begin
        rxState <= 2'h2;
      end
    end else if (_T_39) begin
      if (_T_42) begin
        rxState <= 2'h0;
      end
    end
    if (reset) begin
      rxBaudCount <= 10'h0;
    end else if (txfifo_io_enq_ready) begin
      if (_T_27) begin
        rxBaudCount <= 10'h0;
      end else begin
        rxBaudCount <= _T_29;
      end
    end
    if (reset) begin
      rxDataIdx <= 3'h0;
    end else if (_T_32) begin
      rxDataIdx <= _T_35;
    end
  end
endmodule
module TestHarness( // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407164.2]
  input   clock, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407165.4]
  input   reset, // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407166.4]
  output  io_success // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407167.4]
);
  wire  dut_debug_clock; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_reset; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_clockeddmi_dmi_req_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_clockeddmi_dmi_req_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [6:0] dut_debug_clockeddmi_dmi_req_bits_addr; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [31:0] dut_debug_clockeddmi_dmi_req_bits_data; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [1:0] dut_debug_clockeddmi_dmi_req_bits_op; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_clockeddmi_dmi_resp_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_clockeddmi_dmi_resp_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [31:0] dut_debug_clockeddmi_dmi_resp_bits_data; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [1:0] dut_debug_clockeddmi_dmi_resp_bits_resp; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_clockeddmi_dmiClock; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_clockeddmi_dmiReset; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_ndreset; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_dmactive; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_debug_dmactiveAck; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_resetctrl_hartIsInReset_0; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_serial_in_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_serial_in_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [31:0] dut_serial_in_bits; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_serial_out_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_serial_out_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [31:0] dut_serial_out_bits; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_aw_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_aw_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [3:0] dut_mem_axi4_aw_bits_id; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [31:0] dut_mem_axi4_aw_bits_addr; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [7:0] dut_mem_axi4_aw_bits_len; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [2:0] dut_mem_axi4_aw_bits_size; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [1:0] dut_mem_axi4_aw_bits_burst; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_aw_bits_lock; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [3:0] dut_mem_axi4_aw_bits_cache; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [2:0] dut_mem_axi4_aw_bits_prot; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [3:0] dut_mem_axi4_aw_bits_qos; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_w_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_w_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [63:0] dut_mem_axi4_w_bits_data; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [7:0] dut_mem_axi4_w_bits_strb; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_w_bits_last; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_b_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_b_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [3:0] dut_mem_axi4_b_bits_id; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [1:0] dut_mem_axi4_b_bits_resp; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_ar_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_ar_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [3:0] dut_mem_axi4_ar_bits_id; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [31:0] dut_mem_axi4_ar_bits_addr; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [7:0] dut_mem_axi4_ar_bits_len; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [2:0] dut_mem_axi4_ar_bits_size; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [1:0] dut_mem_axi4_ar_bits_burst; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_ar_bits_lock; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [3:0] dut_mem_axi4_ar_bits_cache; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [2:0] dut_mem_axi4_ar_bits_prot; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [3:0] dut_mem_axi4_ar_bits_qos; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_r_ready; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_r_valid; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [3:0] dut_mem_axi4_r_bits_id; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [63:0] dut_mem_axi4_r_bits_data; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire [1:0] dut_mem_axi4_r_bits_resp; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_mem_axi4_r_bits_last; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_uart_0_txd; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_uart_0_rxd; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_clock; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  dut_reset; // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
  wire  SimSerial_clock; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire  SimSerial_reset; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire  SimSerial_serial_in_ready; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire  SimSerial_serial_in_valid; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire [31:0] SimSerial_serial_in_bits; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire  SimSerial_serial_out_ready; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire  SimSerial_serial_out_valid; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire [31:0] SimSerial_serial_out_bits; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire  SimSerial_exit; // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
  wire  SimDRAM_clock; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_reset; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_aw_ready; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_aw_valid; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [3:0] SimDRAM_axi_aw_bits_id; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [31:0] SimDRAM_axi_aw_bits_addr; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [7:0] SimDRAM_axi_aw_bits_len; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [2:0] SimDRAM_axi_aw_bits_size; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [1:0] SimDRAM_axi_aw_bits_burst; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_aw_bits_lock; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [3:0] SimDRAM_axi_aw_bits_cache; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [2:0] SimDRAM_axi_aw_bits_prot; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [3:0] SimDRAM_axi_aw_bits_qos; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_w_ready; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_w_valid; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [63:0] SimDRAM_axi_w_bits_data; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [7:0] SimDRAM_axi_w_bits_strb; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_w_bits_last; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_b_ready; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_b_valid; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [3:0] SimDRAM_axi_b_bits_id; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [1:0] SimDRAM_axi_b_bits_resp; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_ar_ready; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_ar_valid; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [3:0] SimDRAM_axi_ar_bits_id; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [31:0] SimDRAM_axi_ar_bits_addr; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [7:0] SimDRAM_axi_ar_bits_len; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [2:0] SimDRAM_axi_ar_bits_size; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [1:0] SimDRAM_axi_ar_bits_burst; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_ar_bits_lock; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [3:0] SimDRAM_axi_ar_bits_cache; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [2:0] SimDRAM_axi_ar_bits_prot; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [3:0] SimDRAM_axi_ar_bits_qos; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_r_ready; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_r_valid; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [3:0] SimDRAM_axi_r_bits_id; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [63:0] SimDRAM_axi_r_bits_data; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire [1:0] SimDRAM_axi_r_bits_resp; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  SimDRAM_axi_r_bits_last; // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
  wire  uart_sim_0_clock; // @[UARTAdapter.scala 132:28:chipyard.TestHarness.GemminiRocketConfig.fir@407214.4]
  wire  uart_sim_0_reset; // @[UARTAdapter.scala 132:28:chipyard.TestHarness.GemminiRocketConfig.fir@407214.4]
  wire  uart_sim_0_io_uart_txd; // @[UARTAdapter.scala 132:28:chipyard.TestHarness.GemminiRocketConfig.fir@407214.4]
  wire  uart_sim_0_io_uart_rxd; // @[UARTAdapter.scala 132:28:chipyard.TestHarness.GemminiRocketConfig.fir@407214.4]
  ChipTop dut ( // @[TestHarness.scala 14:100:chipyard.TestHarness.GemminiRocketConfig.fir@407169.4]
    .debug_clock(dut_debug_clock),
    .debug_reset(dut_debug_reset),
    .debug_clockeddmi_dmi_req_ready(dut_debug_clockeddmi_dmi_req_ready),
    .debug_clockeddmi_dmi_req_valid(dut_debug_clockeddmi_dmi_req_valid),
    .debug_clockeddmi_dmi_req_bits_addr(dut_debug_clockeddmi_dmi_req_bits_addr),
    .debug_clockeddmi_dmi_req_bits_data(dut_debug_clockeddmi_dmi_req_bits_data),
    .debug_clockeddmi_dmi_req_bits_op(dut_debug_clockeddmi_dmi_req_bits_op),
    .debug_clockeddmi_dmi_resp_ready(dut_debug_clockeddmi_dmi_resp_ready),
    .debug_clockeddmi_dmi_resp_valid(dut_debug_clockeddmi_dmi_resp_valid),
    .debug_clockeddmi_dmi_resp_bits_data(dut_debug_clockeddmi_dmi_resp_bits_data),
    .debug_clockeddmi_dmi_resp_bits_resp(dut_debug_clockeddmi_dmi_resp_bits_resp),
    .debug_clockeddmi_dmiClock(dut_debug_clockeddmi_dmiClock),
    .debug_clockeddmi_dmiReset(dut_debug_clockeddmi_dmiReset),
    .debug_ndreset(dut_debug_ndreset),
    .debug_dmactive(dut_debug_dmactive),
    .debug_dmactiveAck(dut_debug_dmactiveAck),
    .resetctrl_hartIsInReset_0(dut_resetctrl_hartIsInReset_0),
    .serial_in_ready(dut_serial_in_ready),
    .serial_in_valid(dut_serial_in_valid),
    .serial_in_bits(dut_serial_in_bits),
    .serial_out_ready(dut_serial_out_ready),
    .serial_out_valid(dut_serial_out_valid),
    .serial_out_bits(dut_serial_out_bits),
    .mem_axi4_aw_ready(dut_mem_axi4_aw_ready),
    .mem_axi4_aw_valid(dut_mem_axi4_aw_valid),
    .mem_axi4_aw_bits_id(dut_mem_axi4_aw_bits_id),
    .mem_axi4_aw_bits_addr(dut_mem_axi4_aw_bits_addr),
    .mem_axi4_aw_bits_len(dut_mem_axi4_aw_bits_len),
    .mem_axi4_aw_bits_size(dut_mem_axi4_aw_bits_size),
    .mem_axi4_aw_bits_burst(dut_mem_axi4_aw_bits_burst),
    .mem_axi4_aw_bits_lock(dut_mem_axi4_aw_bits_lock),
    .mem_axi4_aw_bits_cache(dut_mem_axi4_aw_bits_cache),
    .mem_axi4_aw_bits_prot(dut_mem_axi4_aw_bits_prot),
    .mem_axi4_aw_bits_qos(dut_mem_axi4_aw_bits_qos),
    .mem_axi4_w_ready(dut_mem_axi4_w_ready),
    .mem_axi4_w_valid(dut_mem_axi4_w_valid),
    .mem_axi4_w_bits_data(dut_mem_axi4_w_bits_data),
    .mem_axi4_w_bits_strb(dut_mem_axi4_w_bits_strb),
    .mem_axi4_w_bits_last(dut_mem_axi4_w_bits_last),
    .mem_axi4_b_ready(dut_mem_axi4_b_ready),
    .mem_axi4_b_valid(dut_mem_axi4_b_valid),
    .mem_axi4_b_bits_id(dut_mem_axi4_b_bits_id),
    .mem_axi4_b_bits_resp(dut_mem_axi4_b_bits_resp),
    .mem_axi4_ar_ready(dut_mem_axi4_ar_ready),
    .mem_axi4_ar_valid(dut_mem_axi4_ar_valid),
    .mem_axi4_ar_bits_id(dut_mem_axi4_ar_bits_id),
    .mem_axi4_ar_bits_addr(dut_mem_axi4_ar_bits_addr),
    .mem_axi4_ar_bits_len(dut_mem_axi4_ar_bits_len),
    .mem_axi4_ar_bits_size(dut_mem_axi4_ar_bits_size),
    .mem_axi4_ar_bits_burst(dut_mem_axi4_ar_bits_burst),
    .mem_axi4_ar_bits_lock(dut_mem_axi4_ar_bits_lock),
    .mem_axi4_ar_bits_cache(dut_mem_axi4_ar_bits_cache),
    .mem_axi4_ar_bits_prot(dut_mem_axi4_ar_bits_prot),
    .mem_axi4_ar_bits_qos(dut_mem_axi4_ar_bits_qos),
    .mem_axi4_r_ready(dut_mem_axi4_r_ready),
    .mem_axi4_r_valid(dut_mem_axi4_r_valid),
    .mem_axi4_r_bits_id(dut_mem_axi4_r_bits_id),
    .mem_axi4_r_bits_data(dut_mem_axi4_r_bits_data),
    .mem_axi4_r_bits_resp(dut_mem_axi4_r_bits_resp),
    .mem_axi4_r_bits_last(dut_mem_axi4_r_bits_last),
    .uart_0_txd(dut_uart_0_txd),
    .uart_0_rxd(dut_uart_0_rxd),
    .clock(dut_clock),
    .reset(dut_reset)
  );
  SimSerial SimSerial ( // @[SerialAdapter.scala 17:23:chipyard.TestHarness.GemminiRocketConfig.fir@407191.4]
    .clock(SimSerial_clock),
    .reset(SimSerial_reset),
    .serial_in_ready(SimSerial_serial_in_ready),
    .serial_in_valid(SimSerial_serial_in_valid),
    .serial_in_bits(SimSerial_serial_in_bits),
    .serial_out_ready(SimSerial_serial_out_ready),
    .serial_out_valid(SimSerial_serial_out_valid),
    .serial_out_bits(SimSerial_serial_out_bits),
    .exit(SimSerial_exit)
  );
  SimDRAM #(.LINE_SIZE(64), .ID_BITS(4), .ADDR_BITS(32), .MEM_SIZE(268435456), .DATA_BITS(64)) SimDRAM ( // @[IOBinders.scala 288:25:chipyard.TestHarness.GemminiRocketConfig.fir@407207.4]
    .clock(SimDRAM_clock),
    .reset(SimDRAM_reset),
    .axi_aw_ready(SimDRAM_axi_aw_ready),
    .axi_aw_valid(SimDRAM_axi_aw_valid),
    .axi_aw_bits_id(SimDRAM_axi_aw_bits_id),
    .axi_aw_bits_addr(SimDRAM_axi_aw_bits_addr),
    .axi_aw_bits_len(SimDRAM_axi_aw_bits_len),
    .axi_aw_bits_size(SimDRAM_axi_aw_bits_size),
    .axi_aw_bits_burst(SimDRAM_axi_aw_bits_burst),
    .axi_aw_bits_lock(SimDRAM_axi_aw_bits_lock),
    .axi_aw_bits_cache(SimDRAM_axi_aw_bits_cache),
    .axi_aw_bits_prot(SimDRAM_axi_aw_bits_prot),
    .axi_aw_bits_qos(SimDRAM_axi_aw_bits_qos),
    .axi_w_ready(SimDRAM_axi_w_ready),
    .axi_w_valid(SimDRAM_axi_w_valid),
    .axi_w_bits_data(SimDRAM_axi_w_bits_data),
    .axi_w_bits_strb(SimDRAM_axi_w_bits_strb),
    .axi_w_bits_last(SimDRAM_axi_w_bits_last),
    .axi_b_ready(SimDRAM_axi_b_ready),
    .axi_b_valid(SimDRAM_axi_b_valid),
    .axi_b_bits_id(SimDRAM_axi_b_bits_id),
    .axi_b_bits_resp(SimDRAM_axi_b_bits_resp),
    .axi_ar_ready(SimDRAM_axi_ar_ready),
    .axi_ar_valid(SimDRAM_axi_ar_valid),
    .axi_ar_bits_id(SimDRAM_axi_ar_bits_id),
    .axi_ar_bits_addr(SimDRAM_axi_ar_bits_addr),
    .axi_ar_bits_len(SimDRAM_axi_ar_bits_len),
    .axi_ar_bits_size(SimDRAM_axi_ar_bits_size),
    .axi_ar_bits_burst(SimDRAM_axi_ar_bits_burst),
    .axi_ar_bits_lock(SimDRAM_axi_ar_bits_lock),
    .axi_ar_bits_cache(SimDRAM_axi_ar_bits_cache),
    .axi_ar_bits_prot(SimDRAM_axi_ar_bits_prot),
    .axi_ar_bits_qos(SimDRAM_axi_ar_bits_qos),
    .axi_r_ready(SimDRAM_axi_r_ready),
    .axi_r_valid(SimDRAM_axi_r_valid),
    .axi_r_bits_id(SimDRAM_axi_r_bits_id),
    .axi_r_bits_data(SimDRAM_axi_r_bits_data),
    .axi_r_bits_resp(SimDRAM_axi_r_bits_resp),
    .axi_r_bits_last(SimDRAM_axi_r_bits_last)
  );
  UARTAdapter_inTestHarness uart_sim_0 ( // @[UARTAdapter.scala 132:28:chipyard.TestHarness.GemminiRocketConfig.fir@407214.4]
    .clock(uart_sim_0_clock),
    .reset(uart_sim_0_reset),
    .io_uart_txd(uart_sim_0_io_uart_txd),
    .io_uart_rxd(uart_sim_0_io_uart_rxd)
  );
  assign io_success = SimSerial_exit; // @[TestHarness.scala 26:14:chipyard.TestHarness.GemminiRocketConfig.fir@407170.4 IOBinders.scala 384:39:chipyard.TestHarness.GemminiRocketConfig.fir@407205.6]
  assign dut_debug_clock = clock; // @[Periphery.scala 308:19:chipyard.TestHarness.GemminiRocketConfig.fir@407175.4 IOBinders.scala 345:17:chipyard.TestHarness.GemminiRocketConfig.fir@407188.4]
  assign dut_debug_reset = 1'h1; // @[Periphery.scala 309:19:chipyard.TestHarness.GemminiRocketConfig.fir@407176.4]
  assign dut_debug_clockeddmi_dmi_req_valid = 1'h0; // @[Periphery.scala 323:25:chipyard.TestHarness.GemminiRocketConfig.fir@407177.4]
  assign dut_debug_clockeddmi_dmi_req_bits_addr = 7'h0;
  assign dut_debug_clockeddmi_dmi_req_bits_data = 32'h0;
  assign dut_debug_clockeddmi_dmi_req_bits_op = 2'h0;
  assign dut_debug_clockeddmi_dmi_resp_ready = 1'h1; // @[Periphery.scala 324:26:chipyard.TestHarness.GemminiRocketConfig.fir@407178.4]
  assign dut_debug_clockeddmi_dmiClock = clock; // @[Periphery.scala 325:20:chipyard.TestHarness.GemminiRocketConfig.fir@407180.4 IOBinders.scala 343:85:chipyard.TestHarness.GemminiRocketConfig.fir@407186.4]
  assign dut_debug_clockeddmi_dmiReset = 1'h1; // @[Periphery.scala 326:20:chipyard.TestHarness.GemminiRocketConfig.fir@407182.4]
  assign dut_debug_dmactiveAck = 1'h0;
  assign dut_resetctrl_hartIsInReset_0 = 1'h0; // @[Periphery.scala 306:59:chipyard.TestHarness.GemminiRocketConfig.fir@407173.4]
  assign dut_serial_in_valid = SimSerial_serial_in_valid; // @[SerialAdapter.scala 20:21:chipyard.TestHarness.GemminiRocketConfig.fir@407202.4]
  assign dut_serial_in_bits = SimSerial_serial_in_bits; // @[SerialAdapter.scala 20:21:chipyard.TestHarness.GemminiRocketConfig.fir@407201.4]
  assign dut_serial_out_ready = SimSerial_serial_out_ready; // @[SerialAdapter.scala 20:21:chipyard.TestHarness.GemminiRocketConfig.fir@407200.4]
  assign dut_mem_axi4_aw_ready = SimDRAM_axi_aw_ready; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_w_ready = SimDRAM_axi_w_ready; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_b_valid = SimDRAM_axi_b_valid; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_b_bits_id = SimDRAM_axi_b_bits_id; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_b_bits_resp = SimDRAM_axi_b_bits_resp; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_ar_ready = SimDRAM_axi_ar_ready; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_r_valid = SimDRAM_axi_r_valid; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_r_bits_id = SimDRAM_axi_r_bits_id; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_r_bits_data = SimDRAM_axi_r_bits_data; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_r_bits_resp = SimDRAM_axi_r_bits_resp; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_mem_axi4_r_bits_last = SimDRAM_axi_r_bits_last; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign dut_uart_0_rxd = uart_sim_0_io_uart_rxd; // @[UARTAdapter.scala 135:18:chipyard.TestHarness.GemminiRocketConfig.fir@407218.4]
  assign dut_clock = clock; // @[ChipTop.scala 111:11:chipyard.TestHarness.GemminiRocketConfig.fir@407219.4]
  assign dut_reset = reset; // @[ChipTop.scala 114:11:chipyard.TestHarness.GemminiRocketConfig.fir@407220.4]
  assign SimSerial_clock = clock; // @[SerialAdapter.scala 18:20:chipyard.TestHarness.GemminiRocketConfig.fir@407196.4]
  assign SimSerial_reset = reset; // @[SerialAdapter.scala 19:20:chipyard.TestHarness.GemminiRocketConfig.fir@407197.4]
  assign SimSerial_serial_in_ready = dut_serial_in_ready; // @[SerialAdapter.scala 20:21:chipyard.TestHarness.GemminiRocketConfig.fir@407203.4]
  assign SimSerial_serial_out_valid = dut_serial_out_valid; // @[SerialAdapter.scala 20:21:chipyard.TestHarness.GemminiRocketConfig.fir@407199.4]
  assign SimSerial_serial_out_bits = dut_serial_out_bits; // @[SerialAdapter.scala 20:21:chipyard.TestHarness.GemminiRocketConfig.fir@407198.4]
  assign SimDRAM_clock = clock; // @[IOBinders.scala 290:22:chipyard.TestHarness.GemminiRocketConfig.fir@407212.4]
  assign SimDRAM_reset = reset; // @[IOBinders.scala 291:22:chipyard.TestHarness.GemminiRocketConfig.fir@407213.4]
  assign SimDRAM_axi_aw_valid = dut_mem_axi4_aw_valid; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_id = dut_mem_axi4_aw_bits_id; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_addr = dut_mem_axi4_aw_bits_addr; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_len = dut_mem_axi4_aw_bits_len; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_size = dut_mem_axi4_aw_bits_size; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_burst = dut_mem_axi4_aw_bits_burst; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_lock = dut_mem_axi4_aw_bits_lock; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_cache = dut_mem_axi4_aw_bits_cache; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_prot = dut_mem_axi4_aw_bits_prot; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_aw_bits_qos = dut_mem_axi4_aw_bits_qos; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_w_valid = dut_mem_axi4_w_valid; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_w_bits_data = dut_mem_axi4_w_bits_data; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_w_bits_strb = dut_mem_axi4_w_bits_strb; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_w_bits_last = dut_mem_axi4_w_bits_last; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_b_ready = dut_mem_axi4_b_ready; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_valid = dut_mem_axi4_ar_valid; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_id = dut_mem_axi4_ar_bits_id; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_addr = dut_mem_axi4_ar_bits_addr; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_len = dut_mem_axi4_ar_bits_len; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_size = dut_mem_axi4_ar_bits_size; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_burst = dut_mem_axi4_ar_bits_burst; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_lock = dut_mem_axi4_ar_bits_lock; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_cache = dut_mem_axi4_ar_bits_cache; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_prot = dut_mem_axi4_ar_bits_prot; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_ar_bits_qos = dut_mem_axi4_ar_bits_qos; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign SimDRAM_axi_r_ready = dut_mem_axi4_r_ready; // @[IOBinders.scala 289:20:chipyard.TestHarness.GemminiRocketConfig.fir@407211.4]
  assign uart_sim_0_clock = clock; // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407215.4]
  assign uart_sim_0_reset = reset; // @[:chipyard.TestHarness.GemminiRocketConfig.fir@407216.4]
  assign uart_sim_0_io_uart_txd = dut_uart_0_txd; // @[UARTAdapter.scala 134:28:chipyard.TestHarness.GemminiRocketConfig.fir@407217.4]
endmodule
