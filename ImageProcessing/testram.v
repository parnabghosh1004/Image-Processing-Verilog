`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:49:12 04/30/2021
// Design Name:   ram
// Module Name:   F:/Documents/Image Proccessing Verilog/ImageProcessing/testram.v
// Project Name:  ImageProcessing
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ram
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testram;

	// Inputs
	reg clka;
	reg ena;
	reg [0:0] wea;
	reg [15:0] addra;
	reg [23:0] dina;

	// Outputs
	wire [23:0] douta;

	// Instantiate the Unit Under Test (UUT)
	ram uut (
		.clka(clka), 
		.ena(ena), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta)
	);

	initial begin
		// Initialize Inputs
		clka = 0;
		ena = 0;
		wea = 0;
		addra = 16'd0;
		dina = 0;
		ena = 1'b1;
	end

		always #3 clka = ~clka;
		
		always@(posedge clka)
		begin
			if(addra < 16'd41750)begin
				#1 $display("at addr %d bit value is %b",addra,douta);
				addra = addra +1;
			end 
			else
				begin
					addra = 16'd0;
					#5 $display("done ! %d %b",addra,douta);
					$finish;
				end
		end
      
endmodule

