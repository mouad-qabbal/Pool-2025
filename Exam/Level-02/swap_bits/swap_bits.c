#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char left = octet >> 4;       // move high 4 bits to low position
	unsigned char right = octet << 4;      // move low 4 bits to high position
	return (right | left);                 // combine the two halves
}


int main()
{
    unsigned char result = swap_bits(65); // 01000001  //
    printf("%d\n", result);

}