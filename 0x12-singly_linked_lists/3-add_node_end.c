#include "lists.h"

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
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
 * add_node_end - The lenght of a string.
 * @str: The type character pointer.
 * @head: The type pointer of struct
 * Return: Returns new_node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *s_n_d;
n_node = malloc(sizeof(list_t));
if (n_node == NULL)
return (NULL);
n_node->str = strdup(str);
n_node->len = _strlen(str);
n_node->next = NULL;
if (!*head)
{
	*head = n_node;
}
else
{
	s_n_d = *head;
	while (s_n_d->next)
	s_n_d = s_n_d->next;
{
s_n_d->next = n_node;
}
}
return (n_node);
}
