#include "main.h"

/*
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: name of the file to append text.
 * @text_content: text to be appended to file.
 *
 * Return: 1 if successful -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == 0)
		return (-1);

	while (text_content != NULL && text_content[len])
		len++;

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	wr = write(op, text_content, len);
	if (wr == -1)
		return (-1);

	close(op);
	return (1);
}
