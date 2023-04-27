#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t
 * @h: The data type pointer of struct
 * Return: Return elements of the string x.
 */

size_t print_list(const list_t *h)
{
size_t x;
const list_t *s;
x = 0;
s = h;
while (s != NULL)
{
if (s->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
s = s->next;
x++;
}
else
{
printf("[%d] %s\n", s->len, s->str);
s = s->next;
x++;
}
}
return (x);
}
