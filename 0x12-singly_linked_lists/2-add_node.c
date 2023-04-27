#include "lists.h"

/**
 * _strlen - The lenght of a string.
 * @s: Type character  pointer
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	unsigned int len;
for (len = 0; s[len] != '\0'; len++)
{
}
return (len);
}

/**
 * *add_node - The number of elements in a linked list.
 * @head: The data type poointer of struct node.
 * @str: The data type pointer of struct
 * Return: Returns elements of the str
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n_node;
n_node = malloc(sizeof(list_t));
if (n_node == NULL)
return (NULL);
n_node->str = strdup(str);
n_node->len = _strlen(str);
n_node->next = *head;
*head = n_node;
return (n_node);
}
