#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: The data type listint_t double pointer of head
 * Return: Returns the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_loop = head;
	listint_t *second_loop = head;

	if (head == NULL)
		return  (NULL);
if (head == head->next)
	return (head);
while (first_loop)
{
	first_loop = first_loop->next;
	second_loop = head;
while (first_loop && second_loop != first_loop)
{
if (second_loop == first_loop->next)
{
	return (second_loop);
}
	second_loop = second_loop->next;
}
}
	return (first_loop);
}
