#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - the command that reallocates a memory block using malloc & free
 * @ptr: A pointer to the memory previsouly allocated by malloc
 * @old_size: The size of the allocated memory for the pointer
 * @new_size: this defines a new size of the new memory block
 *
 * Return: Returns the pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int d;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
ptr1 = malloc(new_size);
if (!ptr1)
return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
for (d = 0; d < new_size; d++)
ptr1[d] = old_ptr[d];
}
if (new_size > old_size)
{
for (d = 0; d < old_size; d++)
ptr1[d] = old_ptr[d];
}
free(ptr);
return (ptr1);
}
