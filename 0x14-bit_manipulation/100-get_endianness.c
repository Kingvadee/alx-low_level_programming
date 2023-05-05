#include "main.h"

/**
 * get_endianness - Sets the value of a bit to 1 at a given index.
 * Return: Returns 1 if little endian 0 if big endian.
 */
int get_endianness(void)
{
	unsigned int d = 1;
	char *y = (char *)&d;

	if (*y)
		return (1);
	return (0);
}
