#include "main.h"

/**
 * binary_to_uint - Converts a binary number into an unsigned int.
 * @b: The type const char pointer of one bit.
 * Return:	Returns the converted number,
 *		or 0 if one or more char in str b that is not 0/1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int dec = 0;
if (b == NULL)
	return (0);
while (*(b + num) != '\0')
{
if (*(b + num) != '0' && *(b + num) != '1')
	return (0);
dec <<= 1;
if (*(b + num) == '1')
dec ^= 1;
num++;
}
	return (dec);
}
