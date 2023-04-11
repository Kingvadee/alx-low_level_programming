#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an  array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int d;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (d = 0; d < size; d++)
str[d] = c;
return (str);
}
