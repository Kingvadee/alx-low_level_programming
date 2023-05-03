#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: Pointer to the head of the listint_t list
 *
 * Return: Returns the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	for (l = 0; h; l++)
		h = h->next;

	return (l);
}
