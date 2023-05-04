#include "main.h"


/**

 * get_bit - a function that returns the value of a bit at a given index

 * @n: the value to check for index

 * @index: index of the bit 

 * Return: value of bit or -1 if error

*/


int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	unsigned long int i;

	if (index > 63)

		return (-1);


	i = 1 << index;
	
	bit = (n & i) ? 1 : 0;
	
	return (bit);
}
