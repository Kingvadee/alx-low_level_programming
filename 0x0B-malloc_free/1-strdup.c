#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *aaa;
int d, y = 0;
if (str == NULL)
return (NULL);
d = 0;
while (str[d] != '\0')
d++;
aaa = malloc(sizeof(char) * (d + 1));
if (aaa == NULL)
return (NULL);
for (y = 0; str[y]; y++)
aaa[y] = str[y];
return (aaa);
}
