#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - this command creates an array of integers
 * @min: The minimum range of values stored
 * @max: The maximum range of values stored and number of elements
 *
 * Return: Returns pointer to the new array
 */
int *array_range(int min, int max)
{
int *ptr;
int d, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (d = 0; min <= max; d++)
ptr[d] = min++;
return (ptr);
}
