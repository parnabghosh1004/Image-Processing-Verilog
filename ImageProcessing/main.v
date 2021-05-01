`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:11 04/29/2021 
// Design Name: 
// Module Name:    main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module main(clk,reset,value,threshold,select_oper,done_in,done_out,red_in,green_in,blue_in,red_out,green_out,blue_out);

input clk,reset,done_in;
input [7:0] red_in,blue_in,green_in,value,threshold;
input [2:0] select_oper;

output reg [7:0] red_out,green_out,blue_out;
output reg done_out;
reg [8:0] red_temp,green_temp,blue_temp;
parameter BRIGHT_INC = 3'b000,BRIGHT_DEC = 3'b001,RGB_TO_GRAY =  3'b010,INVERT=3'b011,RED=3'b100,GREEN=3'b101,BLUE=3'b110;

always @(posedge clk)
begin
	if(reset) 
		begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
		end
	else if( select_oper == BRIGHT_INC)
		begin
			if(done_in)
				begin 
				red_temp = red_in + value;
				green_temp = green_in + value;
				blue_temp = blue_in + value;
				if(red_temp > 255) red_out <= 255;
				else red_out <= red_temp;
				if(green_temp > 255) green_out <= 255;
				else green_out <= green_temp;
				if(blue_temp > 255) blue_out <= 255;
				else blue_out <= blue_temp;
				done_out = 1'b1;
				end
			else		
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
			end	
		end
	else if( select_oper == BRIGHT_DEC)
		begin
			if(done_in)
			begin
				red_temp = red_in - value;
				green_temp = green_in - value;
				blue_temp = blue_in - value;
				if(red_temp < 0) red_out <= 0;
				else red_out <= red_temp;
				if(green_temp < 0) green_out <= 0;
				else green_out <= green_temp;
				if(blue_temp < 0) blue_out <= 0;
				else blue_out <= blue_temp;
				done_out = 1'b1;
			end
			else
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
			end
		end
	else if( select_oper == RGB_TO_GRAY)
		begin
			if(done_in)
			begin
			red_out <= (red_in >> 2) + (red_in >> 5) + (red_in >> 6) + (green_in >>1) + (green_in >>4) + (green_in >>6) + (blue_in >>4) + (blue_in >>5) + (blue_in >>6);
			green_out <= (red_in >> 2) + (red_in >> 5) + (red_in >> 6) + (green_in >>1) + (green_in >>4) + (green_in >>6) + (blue_in >>4) + (blue_in >>5) + (blue_in >>6);
			blue_out <= (red_in >> 2) + (red_in >> 5) + (red_in >> 6) + (green_in >>1) + (green_in >>4) + (green_in >>6) + (blue_in >>4) + (blue_in >>5) + (blue_in >>6);
			done_out = 1'b1;
			end
			else
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
			end
		end
	else if (select_oper == INVERT)
		begin 
			if(done_in) 
			begin
			red_out <= 255 - red_in;
			green_out <= 255 - green_in;
			blue_out <= 255 - blue_in;
			done_out = 1'b1;
			end
			else
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
			end
		end
	else if(select_oper == RED ) 
		begin
			if(done_in)
			begin
			red_out <= red_in;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b1;
			end
			else
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
			end
		end	
	else if(select_oper == GREEN ) 
		begin
			if(done_in)
			begin
			red_out <= 8'd0;
			green_out <= green_in;
			blue_out <= 8'd0;
			done_out = 1'b1;
			end
			else
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
			end
		end	
	else if(select_oper == BLUE ) 
		begin
			if(done_in)
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= blue_in;
			done_out = 1'b1;
			end
			else
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
			end
		end
	else 
		begin
			if(done_in)
			begin
			red_temp = (red_in >> 2) + (red_in >> 5) + (red_in >> 6) + (green_in >>1) + (green_in >>4) + (green_in >>6) + (blue_in >>4) + (blue_in >>5) + (blue_in >>6);
			green_temp = (red_in >> 2) + (red_in >> 5) + (red_in >> 6) + (green_in >>1) + (green_in >>4) + (green_in >>6) + (blue_in >>4) + (blue_in >>5) + (blue_in >>6);
			blue_temp = (red_in >> 2) + (red_in >> 5) + (red_in >> 6) + (green_in >>1) + (green_in >>4) + (green_in >>6) + (blue_in >>4) + (blue_in >>5) + (blue_in >>6);
			
			if(red_temp > threshold) red_out <= 8'd0;
			else red_out <= 8'd255;
			if(green_temp > threshold) green_out <= 8'd0;
			else green_out <= 8'd255;
			if(blue_temp > threshold) blue_out <= 8'd0;
			else blue_out <= 8'd255;
			done_out = 1'b1;
			end
			else
			begin
			red_out <= 8'd0;
			green_out <= 8'd0;
			blue_out <= 8'd0;
			done_out = 1'b0;
			end
		end
end


endmodule
