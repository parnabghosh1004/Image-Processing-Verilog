`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:55:10 04/29/2021
// Design Name:   main
// Module Name:   F:/Documents/Verilog/ImageProcessing/test.v
// Project Name:  ImageProcessing
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	`define output_filename "F:\\Documents\\Image Proccessing Verilog\\thresholding.coe"
	localparam OPERATION = 3'b111;
	localparam PIXELS = 16'd41749;
	
	// inputs
	reg clk,reset,wea,done_in,ena;
	reg [7:0] bright_val,threshold;
	reg [7:0] red_in,blue_in,green_in;
	reg[2:0] select_oper;
	reg [23:0] dina;
	reg [15:0] addra;
	
	// outputs
	wire [7:0] red_out,green_out,blue_out;
	wire done_out;
	wire [23:0] douta;
	reg [23:0] processed[PIXELS:0];

	ram image (.clka(clk),.ena(ena),.wea(wea),.addra(addra),.dina(dina),.douta(douta));
	main uut (clk,reset,bright_val,threshold,select_oper,done_in,done_out,red_in,green_in,blue_in,red_out,green_out,blue_out);

	task writeCOE;
		integer fileID;
		begin
			addra = 16'd0;
			fileID = $fopen(`output_filename,"wb");
			begin 
				$fwrite(fileID,"memory_initialization_radix = 2;\n");
				$fwrite(fileID,"memory_initialization_vector =\n");
			end
			while(addra <= PIXELS) @(posedge clk)
			begin
				if(addra == PIXELS) $fwrite(fileID,"%b;",processed[addra]);
				else $fwrite(fileID,"%b,\n",processed[addra]);
				addra = addra + 1;
			end
			$fclose(fileID);
		end
	endtask	
	
	initial begin
	clk = 1'b0;
	end
	
	always #0.01 clk = ~clk;
	
	initial begin
		select_oper = OPERATION;
		bright_val = 8'd60;
		threshold = 8'd80;
		red_in = 8'd0;
		green_in = 8'd0;
		blue_in = 8'd0;
		reset = 1'b0;
		dina = 24'd0;
		wea = 1'b0;
		ena = 1'b1;
		addra = 16'd0;
	end
	
	initial 
		begin
			addra = 16'd0;
			while(addra <= PIXELS) @(posedge clk)
			begin
				done_in = 1'b0;
				{red_in,green_in,blue_in} = douta;
				done_in = 1'b1;
				#0.05;
				if(done_out)
					begin
						processed[addra] = {red_out,green_out,blue_out};
						addra = addra +1;
					end
			end
		end

	initial begin
		#6000 writeCOE;
		#5 $finish;
	end		

endmodule

