#include "main.h"

/**
 * set_bit - sets a bit at a given inder number to 1
 * @n : pointer to the number to change
 * @index: index of the bit to set to 1
 * Return : 1 on success or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int i;

if (index > 63)
return (-1);

i = 1 << index;
*n = (*n | i);
return (1);
}
