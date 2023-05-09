#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: number of letters to  read and print
 *
 * Return: 0 if fail, Else actual number of letters it  reads and prints
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int as;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	as = open(filename, O_RDONLY);
	if (as == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(as);
		return (0);
	}
	r = read(as, buffer, letters);
	close(as);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (r != w)
		return (0);
	return (w);
}
