#include "main.h"
/**
  * set_bit - function that sets the value of a bit
  * to 1 at a given index
  * @n: pointer to the value
  * @index: index of the bit to set to 1
  *
  * Return: 1 if success or -1 for failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)

		return (-1);

	*n |= (1 << index);

	return (1);
}
