#include "main.h"
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: a pointer variable
 * @letters: number of letters to print
 *
 * Return: the letters to be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tmp_pd;
	ssize_t tmp_read, tmp_write;
	const *buffer;

	if (!filename)
		return (0);
	/* open */
	tmp_pd = open(filename, O_RDONLY);
	if (tmp_pd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	/* read */
	tmp_read = read(tmp_pd, buffer, letters);
	if (tmp_read == -1)
	{
		free(buffer);
		close(tmp_pd);
		return (0);
	}
	tmp_write = write(STDOUT_FILEON, buffer, tmp_pd);
	if (tmp_write == -1)
	{
		free(buffer);
		close(tmp_pd);
		return (0);
	}
	close(tmp_pd);
	return (tmp_read);
}
