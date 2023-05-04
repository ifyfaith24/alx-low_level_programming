#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number

 * @n: number of binary to be printed

 * Return: nothing

*/


void print_binary(unsigned long int n)
{


	int i, num = 0;

	unsigned long int j;

	for (i = 63; i >= 0; i--)

	{
		j = n >> i;

		if (j & 1)

		{
			_putchar('1');

			num++;

		}

		else if (num)

			_putchar('0');

	}

	if (!num)

		_putchar('0');
}

