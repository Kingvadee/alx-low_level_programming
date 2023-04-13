#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory by using malloc
 * @b: The number of bytes allocated
 *
 * Return: The pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
