#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t fd, let, w;
    char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		return (0);
	}

	let = read(flled, text, letters);
	w = write(STDOUT_FILENO, text, let);
	buf = malloc(sizeof(char) * letters);
	close(fd);
	return (w);
}
