#include "main.h"

/**
 * clear_bit - stes the value of a given bit to 0
 * @n : pointer to the number to change
 * @index: index of the bit
 * Return : 1 on success or -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i;

if (index > 63)
return (-1);

i = 1 << index;

if (*n & i)
*n ^= i;
return (i);
}
