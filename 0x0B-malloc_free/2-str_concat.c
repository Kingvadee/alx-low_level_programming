#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int d, cd;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
d = cd = 0;
while (s1[d] != '\0')
d++;
while (s2[cd] != '\0')
cd++;
conct = malloc(sizeof(char) * (d + cd + 1));
if (conct == NULL)
return (NULL);
d = cd = 0;
while (s1[d] != '\0')
{
conct[d] = s1[d];
d++;
}
while (s2[cd] != '\0')
{
conct[d] = s2[cd];
d++, cd++;
}
conct[d] = '\0';
return (conct);
}
