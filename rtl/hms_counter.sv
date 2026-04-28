
`include "up_down_counter.sv"
`timescale 1ns/ 1ps

module hms_counter #(
    parameter int N_HOURS = 24, // number of hours
    parameter int N_MINUTES = 60, // number of minutes
    parameter int N_SECONDS = 60, // number of seconds

// Output port widths
    parameter int W_HOURS = 5,
    parameter int W_MINUTES = 6,
    parameter int W_SECONDS = 6
) (
    input logic clk ,   
    input logic enable ,
    output logic [W_HOURS -1:0] hours ,
    output logic [W_MINUTES -1:0] minutes ,
    output logic [W_SECONDS -1:0] seconds
);

    logic second_rollover;
    logic minute_rollover;


    up_down_counter #(.MAX(N_SECONDS), .WIDTH(W_SECONDS)) u_second(.clk(clk), .enable(enable), .up(1'b1), .count(seconds));
    up_down_counter #(.MAX(N_MINUTES), .WIDTH(W_MINUTES)) u_minute(.clk(clk), .enable(enable), .up(1'b1), .count(minutes));
    up_down_counter #(.MAX(N_HOURS), .WIDTH(W_HOURS)) u_hour( .clk(clk), .enable(enable), .up(1'b1), .count(hours));

    localparam logic [W_MINUTES - 1: 0] Nminutes = (N_MINUTES - 1);
    localparam logic [W_SECONDS - 1: 0] Nseconds = (N_SECONDS - 1);



endmodule

