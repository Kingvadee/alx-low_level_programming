#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
int a, b, c;
int largest;

a = 972;
b = -98;
c = 0;

largest = largest_number(a, b, c);

if (largest == 972)
{
printf("0 is the largest number\n");
}
else
{
printf("%d is the largest number\n", largest);
}

return (0);
}
