#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This prints the name using pointer to function.
 * @name: The string to add.
 * @f: The pointer to function.
 * Return: Returns to nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
