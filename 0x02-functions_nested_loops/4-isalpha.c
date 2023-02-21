#include "main.h"
/**
 * _isalpha - Checks for  alphabetic character
 * @c: The character to check
 * Return: 1 or 0
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
