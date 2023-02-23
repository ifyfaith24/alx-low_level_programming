#include "main.h"

/**
 *print_square - prints a square, followed by a new line
 * @size: The number of squares
 * Return: Always 0.
 */
void print_square(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
