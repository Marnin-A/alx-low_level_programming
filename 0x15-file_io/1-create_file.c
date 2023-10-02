#include "main.h"

/*
 * create_file - a function that creates a file.
 *
 * @filename: pointer to the name of teh file.
 * @text_content:  a NULL terminated string to write to the file.
 *
 * Return: return 1 if successful and -1 if not.
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0, wr, op;

	if (filename == NULL)
		return (-1);
	while(text_content != NULL && text_content[len])
		len++;

	op = open(filename,  O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
