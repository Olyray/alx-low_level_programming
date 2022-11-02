#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void close_descriptor(int descriptor);

/**
 * main - a function that copies one file to another
 * @argc: the argument count
 * @argv: the argument vectors
 * Return: the number zero
 */
int main(int argc, char *argv[])
{
	/*Create variables and buffer*/
	int file_from, file_to, write_check, read_check, read_bytes = 1024;
	char *buffer;
	/*Check number of arguments*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * read_bytes);
	/*Open file_from and if it returns -1 exit with code 98*/
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	/*Creat file_to*/
	else if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/*Create while loop to read from file_from with condition of > 0*/
	while ((read_check = read(file_from, buffer, read_bytes)) > 0)
	{
		write_check = write(file_to, buffer, read_bytes);
		/*Write to file_to*/
		if (write_check == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		/*If return value of write not equal to read*/
			/*Error*/
	}
	close_descriptor(file_from);
	close_descriptor(file_to);
	return (0);
}

/**
 * close_descriptor - closes a file descriptor
 * @descriptor: the descriptor to be closed
 */
void close_descriptor(int descriptor)
{
	int check_close;

	check_close = close(descriptor);
	if (check_close == -1)
	{
		dprintf(2, "Error: Can't close fd %i", descriptor);
		exit(100);
	}
}
