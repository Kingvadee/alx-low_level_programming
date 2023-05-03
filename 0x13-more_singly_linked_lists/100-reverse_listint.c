#include "lists.h"

/**
 * reverse_listint - A function that reverses listint
 * @head: The data type double pointer the head/next node
 * Return: Returns new_node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *post_node;
while (head && *head)
{
post_node = (*head)->next;
(*head)->next = old_node;
old_node = *head;
*head = post_node;
}
*head = old_node;
	return (*head);
}
