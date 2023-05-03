#include "lists.h"

/**
 * free_listint2 - It Frees a listint_t list
 * @head: Pointer to the address of the
 *        head of the listint_t list
 *
 * Descript: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
