#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int d, y, x = 0, l = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (d = 0; d < ac; d++)
{
for (y = 0; av[d][y]; y++)
l++;
}
l += ac;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (d = 0; d < ac; d++)
{
for (y = 0; av[d][y]; y++)
{
str[x] = av[d][y];
x++;
}
if (str[x] == '\0')
{
str[x++] = '\n';
}
}
return (str);
}
