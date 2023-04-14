#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_memset - commad that fills memory with a constant byte
 * @s: This defines memory area to be filled
 * @b: The character to copy
 * @n: The number of times to copy character b
 *
 * Return: returns the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int d;
for (d = 0; d < n; d++)
{
s[d] = b;
}
return (s);
}

/**
 * *_calloc - this command allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: size of each element
 *
 * Return: returns pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
