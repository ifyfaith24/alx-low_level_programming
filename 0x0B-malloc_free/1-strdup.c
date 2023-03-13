#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  duplicat to a new memory location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
char *i;
int j, n = 0;

if (str == NULL)
return (NULL);
j = 0;
while (str[j] != '\0')
j++;
i = malloc(sizeof(char) * (j + 1));
if (i == NULL)
return (NULL);
for (n = 0; str[n]; n++)
i[n] = str[n];
return (i);
}
