#include <stdlib.h>
#include "main.h"

/*
 * read_textfile - a function that reads a text fil
 * and prints it to the POSIX standard output.
 *
 * @filename: pointer to the file containing the text.
 * @letters:  the number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, op;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letter);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if(op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);
	return (wr);

	
}
