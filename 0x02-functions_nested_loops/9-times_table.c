 #include "main.h"
/**
* times_table - Prints the 9 times table, starting with •
* Return: empty output
*/
void times_table(void)
{
int a = 0, e = 9, count = 0;
while (count <= 9)
{
while (a <= e)
{int product = count * a;
if (a != 0)
{
_putchar(',');
if (product < 10)
{
_putchar(' ');
_putchar(' ');
}
else
_putchar(' ');
}
if (product < 10)
_putchar(product + '0');
else
{
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
if (a == e)
_putchar('\n');
a++;
}
a = 0;
count++;
}
}
