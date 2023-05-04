#include "main.h"

/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: pointer to a string containing the binary number
 *
 * Return: the converted unit 
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;

	if(!b)

		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
		
			return (0);
		
		n = (n << 1) | (b[i] - '0');

		i++;
	}

	return (n);
}

