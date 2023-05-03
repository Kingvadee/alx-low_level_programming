#include "lists.h"

/**
 * print_listint - Print all elements of a list_int list
 * @h: the data type pointer of struct
 * Return: Return elements of the str s
 */
size_t print_listint(const listint_t *h)
{
unsigned int d = 0;
const listint_t	 *new_node = h;
for (; new_node; new_node = new_node->next)
{
printf("%d\n", new_node->n);
d++;
}
return (d);
}
