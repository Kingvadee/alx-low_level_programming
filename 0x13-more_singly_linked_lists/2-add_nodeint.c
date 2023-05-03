#include "lists.h"

/**
 * add_nodeint - Adds a node at the begining of a listint_t.
 * @n: The data type pointer of struct
 * @head: The data type pointer of the head/next node
 * Return: Returns the elements of the str new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
