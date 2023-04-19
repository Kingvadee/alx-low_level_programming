#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - This prints each array element on a new line
 * @array: array
 * @size: how many element to print
 * @action: The pointer to print in regular or hexadecimal
 * Return: Returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int d;
if (array == NULL || action == NULL)
return;
for (d = 0; d < size; d++)
{
action(array[d]);
}
}
