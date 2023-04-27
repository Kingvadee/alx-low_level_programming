#include "lists.h"

/**
 * list_len - The number of elements in a linked list
 * @h: The data type pointer of struct.
 * Return: Returns elements of the string
 */
size_t list_len(const list_t *h)
{
	const list_t *s;
	size_t node = 0;
s = h;
while (s != NULL)
{
s = s->next;
node++;
}
return (node);
}
