#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints to standard output
 * @filename: The name of the file
 * @letters: The number of letters
 * Return: the number of letters it reads and prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened_file, read_file, written_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opened_file = open(filename, O_RDONLY);
	read_file = read(opened_file, buffer, letters);
	written_file = write(STDOUT_FILENO, buffer, read_file);

	if (opened_file == -1 || read_file == -1
	|| written_file == -1 || written_file != read_file)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opened_file);

	return (written_file);
}
