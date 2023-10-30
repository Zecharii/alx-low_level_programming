#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: name of the file to read.
 * @letters: number of letters to read and print.
 * Return: number of letters it could read and print, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_result, write_result;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	read_result = read(file_descriptor, buffer, letters);
	write_result = write(file_descriptor, buffer, read_result);

	close(file_descriptor);

	free(buffer);

	return (write_result);
}
