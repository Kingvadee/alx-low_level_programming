#include "function_pointers.h"
/**
 * int_index - Returns the index place if comparison is true,else returns -1
 * @array: Array
 * @size: The size of elements in the array
 * @cmp: pointer to function of one of the 3 in main
 * Return: Returns 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int d;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (d = 0; d < size; d++)
{
if (cmp(array[d]))
return (d);
}
return (-1);
}
