#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n : unsigned long int input
 * @index: index of the bit
 * Return : value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;

if (index > 63)
return (-1);

i = (n >> index) & 1;
return (i);
}
