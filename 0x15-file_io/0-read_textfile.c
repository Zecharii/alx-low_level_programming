#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. Return 0, if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd,
	ssize_t rdr, wrr;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
	{
		return (0);
	}

	rdr = read(fd, buf, letters);
	wrr = write(STDOUT_FILENO, buf, rdr);

	close(fd);

	free(buf);

	return (wrr);
}

