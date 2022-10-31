#include "main.h"

/**
 * append_text_to_file - append a text to a file
 * @filename: the name of the file
 * @text_content: the content to be written
 * Return: the process value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int output_file, written_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	output_file = open(filename, O_WRONLY | O_APPEND);
	written_file = write(output_file, text_content, len);

	if (output_file == -1 || written_file == -1)
		return (-1);

	close(output_file);

	return (1);
}
