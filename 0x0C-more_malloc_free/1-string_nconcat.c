#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *string_nconcat - Command concatenates n bytes of a string to another string
 * @s1: This is the first string to append to
 * @s2: This is the second string to concatenate from
 * @n: Is the number of bytes from string 2 to concatenate to string 1
 *
 * Return: The pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int d = 0, y = 0, length1 = 0, length2 = 0;
while (s1 && s1[length1])
length1++;
while (s2 && s2[length2])
length2++;
if (n < length2)
s = malloc(sizeof(char) * (length1 + n + 1));
else
s = malloc(sizeof(char) * (length1 + length2 + 1));
if (!s)
return (NULL);
while (d < length1)
{
s[d] = s1[d];
d++;
}
while (n < length2 && d < (length1 + n))
s[d++] = s2[y++];
while (n >= length2 && d < (length1 + length2))
s[d++] = s2[y++];
s[d] = '\0';
return (s);
}
