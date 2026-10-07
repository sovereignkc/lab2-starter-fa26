#include <stddef.h>
#include <stdio.h>
#include <assert.h>


int main(int argc, char *argv[]) {
	assert((a2 & b2) == c2);
	
	char a3 = 0b01010101;
	char b3 = 0b10101111;
	char c3 = 0b11111111;
	assert((a3 | b3) == c3);
	
	char a4 = 0b01010101;
	char b4 = 0b10101111;
	char c4 = 0b11111010;
	assert((a4 & b4 << 4) == c4);
	
	char a5 = 0b01010101;
	char b5 = 0b10101111;
	char c5 = 0b00000101;
	assert((a5 & b5) == c5);
	
	char a6 = 0b00001010;
	char b6 = 0b00000011;
	char c6 = 0b01010000;
	assert((b6 << 3) == c6);
}
