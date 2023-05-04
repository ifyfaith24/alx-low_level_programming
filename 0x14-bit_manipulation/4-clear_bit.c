#include "main.h"

/**
  * clear_bit - sets the value of a given bit to 0

  * @n: pointer to the number to change

  * @index: index to the set bit

  * Return: 1 on success or -1 for failure

  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)

		return (-1);

	*n &= ~(1 << index);

	return (1);
}
