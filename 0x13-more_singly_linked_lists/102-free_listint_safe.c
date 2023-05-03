#include "lists.h"

/**
 * free_listint_safe - A function that Frees a linked list
 * @h: A pointer to the first node in the linked list
 *
 * Return: Returns the Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int diff;
	listint_t *temp;
if (!h || !*h)
	return (0);
while (*h)
{
	diff = *h - (*h)->next;
if (diff > 0)
{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	l++;
}
else
{
	free(*h);
	*h = NULL;
	l++;
	break;
}
}
*h = NULL;
	return (l);
}
