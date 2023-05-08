#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: type char filename pointer of FD
 * @text_content: type char pointer of char
 * Return: Returns -1 if NULL in FN, 1 on sucess
 */
int create_file(const char *filename, char *text_content)
{
	int final_out = 0;
	int  file = 0;
	int  d = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + d) != '\0')
		{
			d++;
		}
		final_out = write(file, text_content, d);
	}
	if (final_out == -1 && final_out != d)
		return (-1);
	return (1);
}
