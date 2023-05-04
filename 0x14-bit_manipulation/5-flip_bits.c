#include "main.h"

/**

 * flip_bits - function that returns the number of bits

 * needed to be flipped to get a number from another num

 * @n: first number

 * @m: second number

 * Return: number of bits  needed

*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m
	unsigned int bit = 0;

	while (xor_value != 0)
	{
		bit += xor & 1;

		xor_value >>= 1;
	}

	return (bit);
}
