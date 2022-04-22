module Top(
  output [7:0] port_foo_bar
);
  assign port_foo_bar = 8'h0; // @[CompatibilityInteroperabilitySpec.scala 349:16]
endmodule
